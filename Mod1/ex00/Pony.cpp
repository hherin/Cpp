/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 11:49:26 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/02 16:35:38 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(): gender(0), eating(0)
{};

Pony::~Pony()
{
	std::cout << "Object destroyed\n\n";
}

void Pony::create_randompony(std::string pos)
{
	int nb = 4;
	bool bo;
	
	std::cout << "Your Pony" << pos << "created\n";

	bo = rand() % 2;
	gender = bo;
	while (nb--)
		bo = rand() % 2;
	eating = bo;

	std::string gen = (gender) ? "female" : "male";
	std::string eat = (eating) ? "eating" : "not eating";

	std::cout << "Your Pony is a " << gen;
	std::cout << " and it is " << eat << std::endl;
}