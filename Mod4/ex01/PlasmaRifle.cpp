/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 15:58:25 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/10 17:20:12 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(std::string const &name, int apcost, int damage)
	: AWeapon(name, apcost, damage)
{
	_name = name;
	_actionPoint = apcost;
	_damage = damage;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &cp)
	: AWeapon(cp)
{}

PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle const &cp)
{
	if (this == &cp)
		return (*this);
	this->_name = cp._name;
	this->_actionPoint = cp._actionPoint;
	this->_damage = cp._damage;
	return (*this);
}

PlasmaRifle::~PlasmaRifle()
{}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *\n";
}