/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:14:08 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/02 17:40:02 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{}

ZombieEvent::~ZombieEvent()
{}

void ZombieEvent::setZombieType(std::string typeE)
{
	typeEvent = typeE;
}

Zombie* ZombieEvent::newZombie (std::string name)
{
	Zombie *zombie = new Zombie;
	zombie->set_ZombieName(name);
	zombie->set_ZombieType(typeEvent);
	return zombie;
}

Zombie* ZombieEvent::randomChump(void)
{
	Zombie *zombie = new Zombie;
	zombie->set_randomName();
	zombie->set_ZombieType(typeEvent);
	zombie->announce();
	return zombie;
}