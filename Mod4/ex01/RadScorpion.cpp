/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:42:55 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/12 12:08:23 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(int hp, std::string const &type)
	: Enemy(hp, type)
{
	std::cout << "* click click click *\n";
}

RadScorpion::RadScorpion(RadScorpion const &cp)
{
	this->_hp = cp._hp;
	this->_type = cp._type;
}

RadScorpion& RadScorpion::operator=(RadScorpion const&cp)
{
	if (this == &cp)
		return (*this);
	this->_hp = cp._hp;
	this->_type = cp._type;
	return (*this);
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *\n";
}
