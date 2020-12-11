/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:35:21 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/10 18:02:46 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(int hp, std::string const &type)
	: Enemy(hp, type)
{
	std::cout << "Gaaah. Break everything !\n";
}

SuperMutant::SuperMutant(SuperMutant const &cp)
{
	this->_hp = cp._hp;
	this->_type = cp._type;
}

SuperMutant& SuperMutant::operator=(SuperMutant const&cp)
{
	if (this == &cp)
		return (*this);
	this->_hp = cp._hp;
	this->_type = cp._type;
	return (*this);
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ...\n";
}

void SuperMutant::takeDamage(int dam)
{
	dam -= 3;
	if (_hp < dam)
		return ;
	_hp -= dam;
}