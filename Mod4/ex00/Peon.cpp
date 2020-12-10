/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:38:27 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/10 12:44:27 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"


Peon::Peon() : Victim()
{
	std::cout << "Zog zog.\n";
}

Peon::Peon(std::string m_name) : Victim(m_name)
{
	std::cout <<  "Zog zog.\n";
}

Peon::Peon(Peon const &cp)
{
	this->name = cp.name;
}

Peon::~Peon()
{
	std::cout << "Bleuark...\n";
}

Peon& Peon::operator=(Peon const &cp)
{
	if (this == &cp)
		return (*this);
	this->name = cp.name;
	return (*this);
}

std::string& Peon::getName()
{
	return (name);
}

void Peon::getPolymorphed() const
{
	std::cout << name <<  " was just polymorphed into a pink pony!\n";
}

std::ostream& operator<<(std::ostream &os, Peon &obj)
{
	os << "I am " << obj.getName() << ", and I like otters!\n";
	return (os);
}
