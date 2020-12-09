/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:19:43 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/08 19:24:07 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string n)
	: hitPoint(100), maxHitPoint(100), energyPoint(50), maxEnergyPoint(50),
	level(1), meleAttack(20), rangeAttack(15), armorDamage(3)
{
	name = n;
	std::cout << "SC4V-TP <" << name << "> of level <" << level << "> is created\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP <" << name << "> has been deleted\n";
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4V-TP <" << name << "> attacks <" << target;
	std::cout << "> at range, causing <" << rangeAttack << "> point of damage!\n";
}

void ScavTrap::meleeAttack(std::string const &target)
{
	hitPoint--;
	std::cout << "SC4V-TP <" << name << "> attacks <" << target;
	std::cout << "> at melee, causing <" << meleAttack << "> point of damage!\n";
}

void ScavTrap::takeDamage(unsigned int amount)
{
	hitPoint -= amount - armorDamage;
	hitPoint = (hitPoint < 0) ? 0 : hitPoint;
	std::cout << "SC4V-TP <" << name << "> got attacked ";
	std::cout << "it has <" << hitPoint << "> hit points left...\n";
}

void ScavTrap::beRepaired(unsigned int amount)
{
	energyPoint += amount;
	energyPoint = (energyPoint > maxEnergyPoint) ? maxEnergyPoint : energyPoint;
	hitPoint += amount;
	hitPoint = (hitPoint > maxHitPoint) ? maxHitPoint : hitPoint;
	std::cout << "SC4V-TP <" << name << "> got repaired, ";
	std::cout << "it has <" << energyPoint << "> points of energy and <" << hitPoint;
	std::cout << "> of hit point !\n";
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