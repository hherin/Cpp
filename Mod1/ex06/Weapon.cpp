/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 22:34:03 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/02 22:53:30 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string s):type(s)
{}

void Weapon::setType(std::string wType)
{
	type = wType;
}

const std::string& Weapon::getType()
{
	return (type);
}