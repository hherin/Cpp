/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:20:38 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/09 19:10:53 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include <iostream>

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap(std::string);
		SuperTrap(const SuperTrap &);
		SuperTrap& operator=(const SuperTrap &cp);
		~SuperTrap();
		void rangedAttack(std::string const &);
		void meleeAttack(std::string const &);
		void print_info(void);
};

#endif