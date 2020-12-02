/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:23:40 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/02 17:43:34 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : type("gogole"), name("Lucas")
{}

void Zombie::set_ZombieType(std::string typeEvent){
	type = typeEvent;
}

void Zombie::set_ZombieName(std::string nameEvent){
	name = nameEvent;
}

void Zombie::announce()
{
	std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss...";
	std::cout << std::endl;
}

void Zombie::set_randomName(void)
{
	std::string randName[10] = {"jack", "brandon", "mick", "sully", "jimmy",
								"suzy", "jean", "carl", "earl" , "betty"};
	int index;
	index = (int)((float)rand() * 8 / (RAND_MAX - 1));
	name = randName[index];
}
