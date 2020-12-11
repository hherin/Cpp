/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 14:04:15 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/10 19:20:10 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
	: _name(name), _actionPoint(apcost), _damage(damage)
{}

AWeapon::AWeapon(AWeapon const &cp)
{
	_name = cp._name;
	_actionPoint = cp._actionPoint;
	_damage = cp._damage;
}

AWeapon& AWeapon::operator=(AWeapon const &cp)
{
	if (this == &cp)
		return (*this);
	_name = cp._name;
	_actionPoint = cp._actionPoint;
	_damage = cp._damage;
	return (*this);
}

AWeapon::~AWeapon()
{}

std::string const& AWeapon::getName() const
{
	return (_name);
}

int AWeapon::getAPCost() const
{
	return (_actionPoint);
}

int AWeapon::getDamage() const
{
	return (_damage);
}