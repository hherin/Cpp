/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 11:18:45 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/10 12:47:07 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim() : name("Kevin")
{
	std::cout << "A random victim called Kevin just appeared!\n";
}

Victim::Victim(std::string m_name) : name(m_name)
{
	std::cout << "A random victim called " << name << " just appeared!\n";
}

Victim::Victim(Victim const &cp)
{
	this->name = cp.name;
}

Victim::~Victim()
{
	std::cout << "The victim " << name << " died for no apparent reasons!\n";
}

Victim& Victim::operator=(Victim const &cp)
{
	if (this == &cp)
		return (*this);
	this->name = cp.name;
	return (*this);
}

std::string& Victim::getName()
{
	return (name);
}

void Victim::getPolymorphed() const
{
	std::cout << name <<  " has been turned into a cute little sheep!\n";
}

std::ostream& operator<<(std::ostream &os, Victim &obj)
{
	os << "I am " << obj.getName() << ", and I like otters!\n";
	return (os);
}

