/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Kamikaze.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 12:28:18 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/16 13:33:24 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Kamikaze.hpp"


Kamikaze::Kamikaze() :_kami(0), nbUnits(0)
{
	_kami = new ISpaceMarine* [1];
	_kami[0] = 0;
}

Kamikaze::Kamikaze(Kamikaze const &cp)
{
	nbUnits = cp.nbUnits;
	_kami = new ISpaceMarine* [nbUnits];
	for (int i = 0; i < nbUnits; i++)
		_kami[i] = cp._kami[i]->clone();
}

Kamikaze const& Kamikaze::operator=(Kamikaze const &cp)
{
	if (this == &cp)
		return (*this);
	for (int i= 0; i < nbUnits; i++)
		delete _kami[i];
	nbUnits = cp.nbUnits;
	ISpaceMarine **new_kami = new ISpaceMarine* [nbUnits];
	std::cout << nbUnits << std::endl;
	for (int i = 0; i < nbUnits; i++){
		new_kami[i] = cp._kami[i]->clone();
	}
	delete[] _kami;
	_kami = new_kami;
	return (*this);
}

Kamikaze::~Kamikaze()
{
	for (int i = 0; i < nbUnits; i++)
		delete _kami[i];
	delete[] _kami;
}

int Kamikaze::getCount() const
{
	return nbUnits;
}

ISpaceMarine* Kamikaze::getUnit(int N) const
{
	return _kami[N];
}

int Kamikaze::push(ISpaceMarine *kami)
{
	ISpaceMarine **newMarine = new ISpaceMarine* [nbUnits + 1];
	std::cout << "New Kamikaze :";
	for (int i = 0; i < nbUnits; i++){
		newMarine[i] = _kami[i];
	}
	delete[] _kami;
	newMarine[nbUnits] = kami;
	_kami = newMarine;
	nbUnits++;
	return nbUnits;
}

