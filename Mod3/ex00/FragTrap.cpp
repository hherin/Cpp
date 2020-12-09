/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:10:59 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/09 19:28:28 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string n)
	: hitPoint(100), maxHitPoint(100), energyPoint(100), maxEnergyPoint(100),
	level(1), meleAttack(30), rangeAttack(20), armorDamage(5)
{
	name = n;
	std::cout << "FragTrap <" << name << "> of level <" << level << "> is created\n";
}

FragTrap::FragTrap(const FragTrap&cp)
{
	std::cout << "FragTrap copy constructor called\n";
	this->hitPoint = cp.hitPoint;
	this->maxHitPoint = cp.maxHitPoint;
	this->energyPoint = cp.energyPoint;
	this->maxEnergyPoint = cp.maxEnergyPoint;
	this->level = cp.level;
	this->name = cp.name;
	this->meleAttack = cp.meleAttack;
	this->rangeAttack = cp.rangeAttack;
	this->armorDamage = cp.armorDamage;
}

FragTrap& FragTrap::operator=(const FragTrap &cp)
{
	std::cout << "FragTrap assigation operator called\n";
	if (this == &cp)
		return (*this);
	this->hitPoint = cp.hitPoint;
	this->maxHitPoint = cp.maxHitPoint;
	this->energyPoint = cp.energyPoint;
	this->maxHitPoint = cp.maxHitPoint;
	this->level = cp.level;
	this->name = cp.name;
	this->meleAttack = cp.meleAttack;
	this->rangeAttack = cp.rangeAttack;
	this->armorDamage = cp.armorDamage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap <" << name << "> has been deleted\n";
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << name << "> attacks <" << target;
	std::cout << "> at range, causing <" << rangeAttack << "> point of damage!\n";
}

void FragTrap::meleeAttack(std::string const &target)
{
	hitPoint--;
	std::cout << "FR4G-TP <" << name << "> attacks <" << target;
	std::cout << "> at melee, causing <" << meleAttack << "> point of damage!\n";
}

void FragTrap::takeDamage(unsigned int amount)
{
	hitPoint -= amount - armorDamage;
	hitPoint = (hitPoint < 0) ? 0 : hitPoint;
	std::cout << "FR4G-TP <" << name << "> got attacked ";
	std::cout << "it has <" << hitPoint << "> hit points left...\n";
}

void FragTrap::beRepaired(unsigned int amount)
{
	energyPoint += amount;
	energyPoint = (energyPoint > maxEnergyPoint) ? maxEnergyPoint : energyPoint;
	hitPoint += amount;
	hitPoint = (hitPoint > maxHitPoint) ? maxHitPoint : hitPoint;
	std::cout << "FR4G-TP <" << name << "> got repaired, ";
	std::cout << "it has <" << energyPoint << "> points of energy and <" << hitPoint;
	std::cout << "> of hit point !\n";
}

void poolAttack(std::string name, std::string const &target)
{
	std::string att[] = {"Big hamer", "Kung fu", "Banana", "Flash", "Butt"};
	int random = rand() % 5;
	std::cout << "FR4G-TP <" << name << "> " << att[random] << " attack <" << target;
	std::cout << ">, causing <40> points of damage !\n";
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (energyPoint > 25){
		poolAttack(name, target);
		energyPoint -= 25;
	}
	else
		std::cout << "FR4G-TP <" << name << "> is out of energy\n";

}