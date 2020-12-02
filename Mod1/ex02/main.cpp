/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:49:23 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/02 17:49:52 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	ZombieEvent event;
	Zombie *zombie, *zombie2, *zombie3;

	srand(time(0));
	{
		Zombie zombie3;
		zombie3.set_ZombieType("pimpled");
		zombie3.set_randomName();
		zombie3.announce();
	}
	event.setZombieType("smelly");
	zombie = event.newZombie("bert");
	zombie->announce();
	event.setZombieType("slow");
	zombie2 = event.randomChump();
	zombie3 = event.randomChump();
	delete zombie;
	delete zombie2;
	delete zombie3;
	std::cout << "AlL ZoMbIes arE DeAD\n";
	// system("leaks Zombiebrains");
}