/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:19:43 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/09 16:12:27 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string n)
	: ClapTrap(n, 100, 100, 50, 50, 20, 15, 3)
{
	std::cout << "ScavTrap constructor is called\n";
}

ScavTrap::ScavTrap(const ScavTrap &cp) : ClapTrap(cp)
{
	std::cout << "ScavTrap copy constructor called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap &cp)
{
	std::cout << "ScavTrap assignation operator called\n";
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

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap <" << name << "> has been deleted\n";
}

void poolChallenge(std::string name, std::string const &target)
{
	std::string att[] = {"count to ten", "sing a song", "guess the weather",
							"eat 10 plates of pasta", "marry Chewbacca"};
	int random = rand() % 5;
	std::cout << "SC4V-TP <" << name << "> " << "challenged <" << target;
	std::cout << "> to " << att[random] << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
	if (energyPoint > 25){
		poolChallenge(name, target);
		energyPoint -= 25;
	}
	else
		std::cout << "SCAV-TP <" << name << "> is out of energy\n";

}