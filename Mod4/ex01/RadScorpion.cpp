/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:42:55 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/11 11:22:14 by heleneherin      ###   ########.fr       */
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



// void RadScorpion::takeDamage(int dam)
// {
// 	dam -= 3;
// 	if (_hp < dam)
// 		return ;
// 	_hp -= dam;
// }