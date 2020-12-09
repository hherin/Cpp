/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 10:57:37 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/09 16:10:40 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
# include <time.h>
# include <cstdlib>

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string);
		FragTrap(const FragTrap&);
		FragTrap& operator=(const FragTrap&);
		~FragTrap();
		void vaulthunter_dot_exe(std::string const &);
};

#endif