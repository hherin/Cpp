/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 10:57:37 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/08 11:59:15 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

# include <time.h>
# include <cstdlib>

class Fragtrap
{
	public:
		Fragtrap(std::string);
		~Fragtrap();
		void rangedAttack(std::string const &);
		void meleeAttack(std::string const &);
		void takeDamage(unsigned int);
		void beRepaired(unsigned int);
		void vaulthunter_dot_exe(std::string const &);

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