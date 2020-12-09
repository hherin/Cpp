/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 22:50:36 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/09 19:18:45 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	public:
		NinjaTrap(std::string);
		NinjaTrap(const NinjaTrap&);
		NinjaTrap& operator=(const NinjaTrap &);
		~NinjaTrap();
		void NinjaShoeBox(ClapTrap&);
		void NinjaShoeBox(FragTrap&);
		void NinjaShoeBox(ScavTrap&);
		void NinjaShoeBox(NinjaTrap&);
		void meleeAttack(std::string const &);
};

#endif