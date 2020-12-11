/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 21:47:21 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/11 23:34:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _idx(0)
{
	_mat = new AMateria* [4];
	for (int i = 0; i < 4; i++)
		_mat[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const &cp)
{
	_idx = cp._idx;
	_mat = new AMateria* [4];
	for (int i = 0; i < _idx; i++)
		_mat[i] = cp._mat[i];
	for (int i = _idx; i < 4; i++)
		_mat[i] = 0;
}

MateriaSource& MateriaSource::operator=(MateriaSource const &cp)
{
	if (this == &cp)
		return (*this);
	_idx = cp._idx;
	AMateria **newMate = new AMateria* [4];
	for (int i = 0; i < _idx + 1; i++)
	{
		newMate[i] = cp._mat[i];
		delete _mat[i];
	}
	delete[] _mat;
	_mat = newMate;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < _idx; i++)
		delete _mat[i];
	delete[] _mat;
}
void MateriaSource::learnMateria(AMateria *mate)
{
	if (_idx == 3)
		return;
	_mat[_idx] = mate->clone();
	_idx++;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < _idx; i++)
	{
		if (!(_mat[i]->getType().compare(type)))
			return (_mat[i]->clone());
	}
	return 0;
}