/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:35:21 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/12 12:25:15 by user42           ###   ########.fr       */
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
	if (dam < 0)
		return ;
	_hp -= dam;
	if (0 > _hp){
		_hp = 0;
		delete this;
	}
}