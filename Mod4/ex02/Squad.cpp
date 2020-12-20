/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 11:32:23 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/20 16:17:28 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() :_squad(0), nbUnits(0)
{
	_squad = new ISpaceMarine* [1];
	_squad[0] = 0;
}

Squad::Squad(Squad const &cp)
{
	nbUnits = cp.nbUnits;
	_squad = new ISpaceMarine* [nbUnits];
	for (int i = 0; i < nbUnits; i++)
		_squad[i] = cp._squad[i]->clone();
}

Squad const& Squad::operator=(Squad const &cp)
{
	if (this == &cp)
		return (*this);
	for (int i= 0; i < nbUnits; i++)
		delete _squad[i];
	nbUnits = cp.nbUnits;
	ISpaceMarine **new_squad = new ISpaceMarine* [nbUnits];
	for (int i = 0; i < nbUnits; i++){
		new_squad[i] = cp._squad[i]->clone();
	}
	delete[] _squad;
	_squad = new_squad;
	return (*this);
}

Squad::~Squad()
{
	for (int i = 0; i < nbUnits; i++)
		delete _squad[i];
	delete[] _squad;
}

int Squad::getCount() const
{
	return nbUnits;
}

ISpaceMarine* Squad::getUnit(int N) const
{
	return _squad[N];
}

int Squad::push(ISpaceMarine *squad)
{
	ISpaceMarine **newMarine = new ISpaceMarine* [nbUnits + 1];
	for (int i = 0; i < nbUnits; i++){
		newMarine[i] = _squad[i]->clone();
		delete _squad[i];
	}
	delete[] _squad;
	newMarine[nbUnits] = squad->clone();
	_squad = newMarine;
	nbUnits++;
	return nbUnits;
}

