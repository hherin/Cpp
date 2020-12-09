/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:34:53 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/09 19:13:30 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string n) : ClapTrap(n, 100, 100, 120, 120, 60, 20, 5), FragTrap(n), NinjaTrap(n)
{
	std::cout << "SuperTrap constructor is called\n";
}

SuperTrap::SuperTrap(const SuperTrap &cp) : ClapTrap(cp), FragTrap(cp), NinjaTrap(cp)
{
	std::cout << "SuperTrap copy constructor is called\n";
}

void SuperTrap::print_info(void)
{
	std::cout << hitPoint << std::endl;
	std::cout << maxHitPoint << std::endl;
	std::cout << energyPoint << std::endl;
	std::cout << maxEnergyPoint << std::endl;
	std::cout << meleAttack << std::endl;
	std::cout << rangeAttack << std::endl;
	std::cout << armorDamage << std::endl;
}

SuperTrap& SuperTrap::operator=(const SuperTrap &cp)
{
	std::cout << "SuperTrap assignation operator called\n";
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

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap <" << name << "> has been deleted\n";
}

void SuperTrap::rangedAttack(std::string const &s)
{
	this->FragTrap::rangedAttack(s);
}

void SuperTrap::meleeAttack(std::string const &s)
{
	this->NinjaTrap::meleeAttack(s);
}

