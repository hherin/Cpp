/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Villager.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 11:35:06 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/16 11:56:40 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Villager.hpp"

Villager::Villager(std::string name)
	: Victim(name)
{
	std::cout << "Hmmm what a good day :)\n";
}

Villager::Villager(Villager const &cp)
	: Victim(cp)
{}

Villager::~Villager()
{}

Villager& Villager::operator=(Villager const&cp)
{
	if (this != &cp)
		this->name = cp.name;
	return (*this);
}

void Villager::screamQueen() const
{
	std::cout << "BAAAAAAAh\n";
}

void Villager::getPolymorphed() const
{
	Victim::getPolymorphed();
	screamQueen();
}