/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 19:39:36 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/09 19:08:31 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string n)
	: hitPoint(100), maxHitPoint(100), energyPoint(50), maxEnergyPoint(50),
	level(1), meleAttack(40), rangeAttack(30), armorDamage(7)
{
	name = n;
	std::cout << "ClapTrap constructor is called\n";
}

ClapTrap::ClapTrap(std::string n, unsigned int hit, unsigned int maxHit, unsigned int energy, unsigned int maxEnergy,
		unsigned int mel, unsigned int range, unsigned int armor)
	: hitPoint(hit), maxHitPoint(maxHit), energyPoint(energy), maxEnergyPoint(maxEnergy),
	level(1), meleAttack(mel), rangeAttack(range), armorDamage(armor)
{
	name = n;
	std::cout << "ClapTrap constructor is called\n";
}

ClapTrap::ClapTrap(const ClapTrap &cp)
{
	std::cout << "ClapTrap copy constructor called\n";
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

ClapTrap& ClapTrap::operator=(const ClapTrap &cp)
{
	std::cout << "ClapTrap assignation operator called\n";
	if (this == &cp)
		return (*this);
	this->hitPoint = cp.hitPoint;
	this->maxHitPoint = cp.maxHitPoint;
	this->energyPoint = cp.energyPoint;
	this->energyPoint = cp.energyPoint;
	this->level = cp.level;
	this->name = cp.name;
	this->meleAttack = cp.meleAttack;
	this->rangeAttack = cp.rangeAttack;
	this->armorDamage = cp.armorDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap <" << name << "> has been deleted\n";
}


void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "CL4P-TP <" << name << "> attacks <" << target;
	std::cout << "> at range, causing <" << rangeAttack << "> point of damage!\n";
}

void ClapTrap::meleeAttack(std::string const &target)
{
	hitPoint--;
	std::cout << "CL4P-TP <" << name << "> attacks <" << target;
	std::cout << "> at melee, causing <" << meleAttack << "> point of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	amount = (amount > armorDamage) ? amount : armorDamage;
	hitPoint -= amount - armorDamage;
	hitPoint = (hitPoint < 0) ? 0 : hitPoint;
	std::cout << "CL4P-TP <" << name << "> got attacked ";
	std::cout << "it has <" << hitPoint << "> hit points left...\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	energyPoint += amount;
	energyPoint = (energyPoint > maxEnergyPoint) ? maxEnergyPoint : energyPoint;
	hitPoint += amount;
	hitPoint = (hitPoint > maxHitPoint) ? maxHitPoint : hitPoint;
	std::cout << "CL4P-TP <" << name << "> got repaired, ";
	std::cout << "it has <" << energyPoint << "> points of energy and <" << hitPoint;
	std::cout << "> of hit point !\n";
}