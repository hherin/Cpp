/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 18:45:44 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/11 22:29:29 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{}

Cure::Cure(Cure const &cp)
{
	this->_xp = cp._xp;
	this->_type = cp._type;
}

Cure& Cure::operator=(Cure const &cp)
{
	if (this != &cp)
		this->_xp = cp._xp;
	return (*this);
}

AMateria* Cure::clone() const
{
	AMateria *newCure = new Cure(*this);
	return (newCure);
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}