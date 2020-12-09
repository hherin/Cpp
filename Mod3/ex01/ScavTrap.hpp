/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:12:20 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/08 18:22:49 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class ScavTrap
{
	public:
		ScavTrap(std::string);
		~ScavTrap();
		void rangedAttack(std::string const &);
		void meleeAttack(std::string const &);
		void takeDamage(unsigned int);
		void beRepaired(unsigned int);
		void challengeNewcomer(std::string const &);

	private:
		unsigned int hitPoint;
		unsigned int maxHitPoint;
		unsigned int energyPoint;
		unsigned int maxEnergyPoint;
		unsigned int level;
		std::string name;
		unsigned int meleAttack;
		unsigned int rangeAttack;
		unsigned int armorDamage;
};

#endif