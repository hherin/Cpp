/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 15:27:56 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/09 19:21:00 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string n)
	: ClapTrap(n, 60, 60, 120, 120, 60, 5, 0)
{
	std::cout << "NinjaTrap constructor called\n";
}

NinjaTrap::NinjaTrap(const NinjaTrap &cp) : ClapTrap(cp)
{
	std::cout << "NinjaTrap copy constructor called\n";
}

NinjaTrap& NinjaTrap::operator=(const NinjaTrap &cp)
{
	std::cout << "NinjaTrap assignation operator called\n";
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

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap <" << name << "> destructor called\n";
}

void NinjaTrap::NinjaShoeBox(ClapTrap &obj)
{
	obj.takeDamage(10);
	std::cout << "NINJ4-TP claptrap got attacked !\n";
}

void NinjaTrap::NinjaShoeBox(FragTrap &obj)
{
	obj.takeDamage(10);
	std::cout << "NINJ4-TP fragtrap got attacked !\n";
}

void NinjaTrap::NinjaShoeBox(ScavTrap &obj)
{
	obj.takeDamage(10);
	std::cout << "NINJ4-TP scavtrap got attacked !\n";
}

void NinjaTrap::NinjaShoeBox(NinjaTrap &obj)
{
	obj.takeDamage(10);
	std::cout << "NINJ4-TP ninjatrap got attacked !\n";
}

void NinjaTrap::meleeAttack(std::string const &s)
{
	std::cout << "Out from NinjaTrap:\t";
	ClapTrap::meleeAttack(s);
}