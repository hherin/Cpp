/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 10:45:45 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/10 14:54:14 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string m_name, std::string m_type)
	: name(m_name), type(m_type)
{
	std::cout << name << ", " << type << ", is born!\n";
}

Sorcerer::Sorcerer(Sorcerer const &cp)
{
	this->name = cp.name;
	this->type = cp.type;
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << type << ", is dead. Consequences will never be the same!\n";
}

Sorcerer& Sorcerer::operator=(Sorcerer const &cp)
{
	if (this == &cp)
		return (*this);
	this->name = cp.name;
	this->type = cp.type;
	return (*this);
}

std::string& Sorcerer::getName()
{
	return (this->name);
}

std::string& Sorcerer::getType()
{
	return (this->type);
}

void Sorcerer::polymorph(Victim const &vic)
{
	vic.getPolymorphed();
}

std::ostream& operator<<(std::ostream &os, Sorcerer &obj)
{
	os << "I am ";
	os << obj.getName();
	os << ", ";
	os << obj.getType();
	os << ", and I like ponies!\n";
	return (os);
}
