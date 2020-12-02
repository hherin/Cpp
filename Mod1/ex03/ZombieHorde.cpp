/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:30:43 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/02 20:25:57 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	zomb = new Zombie[N];
	z_nb = N;
	std::cout << "Be careful the horde of Zombie is comming\n";
	for (int i = 0; i < N; i++)
		zomb[i].set_randomName();
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "\nThe horde of Zombies is gone\n";
	std::cout << "You're free to go now : Enjoy :)\n";
	delete[] zomb;
}

void ZombieHorde::announce(void)
{
	for (int i = 0; i < z_nb; i++)
		zomb[i].announce();
}