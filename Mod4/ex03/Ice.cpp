/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 19:17:03 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/11 22:28:35 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{}

Ice::Ice(Ice const &cp)
{
	this->_xp = cp._xp;
	this->_type = cp._type;
}

Ice& Ice::operator=(Ice const&cp)
{
	if (this != &cp)
		this->_xp = cp._xp;
	return (*this);
}

AMateria* Ice::clone() const
{
	AMateria *newIce = new Ice(*this);
	return (newIce);
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}