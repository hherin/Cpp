/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:23:40 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/02 19:08:24 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << "<" << name << "> Braiiiiiiinnnssss...";
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
