/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 18:31:21 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/11 22:53:27 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type), _xp(0)
{}

AMateria::AMateria(AMateria const &cp)
{
	*this = cp;
	this->_type = cp._type;
}

AMateria &AMateria::operator=(AMateria const &cp)
{
	if (this != &cp)
		this->_xp = cp._xp;
	return (*this);
}

std::string const & AMateria::getType() const //Returns the materia type
{
	return _type;
}

unsigned int AMateria::getXP() const //Returns the Materia's XP
{
	return _xp;
}

void AMateria::use(ICharacter& target)
{
	_xp += 10;
	(void)target;
}
