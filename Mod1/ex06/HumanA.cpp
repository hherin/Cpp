/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 22:45:46 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/03 00:05:35 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &s, Weapon &w): name(s), weap(w)
{}

void HumanA::attack()
{
	std::cout << name << " attacks with his " << weap.getType() << std::endl;
}
