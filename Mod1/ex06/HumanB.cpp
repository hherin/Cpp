/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 23:21:27 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/03 00:06:42 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &s):name(s)
{
}

void HumanB::attack()
{
	std::cout << name << " attacks with his " << weap->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &w)
{
	weap = &w;
}