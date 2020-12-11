/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 16:56:50 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/10 17:01:20 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist()
	: AWeapon("Power Fist", 8, 50)
{}

PowerFist::PowerFist(PowerFist const &cp)
	: AWeapon(cp)
{}

PowerFist& PowerFist::operator=(PowerFist const &cp)
{
	if (this == &cp)
		return (*this);
	this->_name = cp._name;
	this->_actionPoint = cp._actionPoint;
	this->_damage = cp._damage;
	return (*this);
}

PowerFist::~PowerFist()
{}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM ! *\n";
}