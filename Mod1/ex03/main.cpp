/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:55:10 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/02 20:26:15 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <unistd.h>

int main(void)
{
	ZombieHorde hord(5);
	std::cout << "GO go hiding !!\n\n";
	hord.announce();
	std::cout << "\n...Wait a little more...\n";
	return 0;
}