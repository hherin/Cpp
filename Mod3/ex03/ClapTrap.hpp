/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 19:29:32 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/09 15:22:39 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(std::string n);
		ClapTrap(std::string, unsigned int hit, unsigned int maxHit, unsigned int energy, unsigned int maxEnergy,
		unsigned int mel, unsigned int range, unsigned int armor);
		ClapTrap(std::string, unsigned int frgtp);
		ClapTrap(const ClapTrap &cp);
		ClapTrap& operator=(const ClapTrap &cp);
		~ClapTrap();
		void rangedAttack(std::string const &);
		void meleeAttack(std::string const &);
		void takeDamage(unsigned int);
		void beRepaired(unsigned int);

	protected:
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