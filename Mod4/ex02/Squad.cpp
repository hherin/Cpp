/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 11:32:23 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/11 18:17:46 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() :_squad(0), nbUnits(0)
{
	_squad = new ISpaceMarine* [1];
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
	nbUnits = cp.nbUnits;
	ISpaceMarine **new_squad = new ISpaceMarine* [nbUnits];
	for (int i = 0; i < nbUnits; i++)
	{
		delete _squad[i];
		new_squad[i] = cp._squad[i]->clone();
	}
	delete _squad;
	_squad = new_squad;
	return (*this);
}

Squad::~Squad()
{
	for (int i = 0; i < nbUnits; i++)
		delete _squad[i];
	delete _squad;
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
	nbUnits++;
	ISpaceMarine **newMarine = new ISpaceMarine* [nbUnits];
	newMarine = _squad;
	newMarine[nbUnits - 1] = squad->clone();
	return nbUnits;
}

