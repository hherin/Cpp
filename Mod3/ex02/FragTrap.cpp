/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:10:59 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/09 16:09:41 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string n)
	: ClapTrap(n, 100, 100, 100, 100, 30, 20, 5)
{
	std::cout << "FragTrap constructor is called\n";
}

FragTrap::FragTrap(const FragTrap&cp) : ClapTrap(cp)
{
	std::cout << "FragTrap copy constructor called\n";
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