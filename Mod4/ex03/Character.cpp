/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 20:56:51 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/11 23:16:53 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name): _name(name), _idx(0)
{
	_mat = new AMateria* [4];
	for (int i = 0; i < 4; i++)
		_mat[i] = 0;
}

Character::Character(Character const&cp)
{
	_idx = cp._idx;
	_name = cp._name;
	_mat = new AMateria* [4];
	for (int i = 0; i < _idx; i++)
		_mat[i] = cp._mat[i];
	for (int i = _idx; i < 4; i++)
		_mat[i] = 0;
}

Character& Character::operator=(Character const &cp)
{
	_idx = cp._idx;
	_name = cp._name;
	AMateria **newMate = new AMateria* [4];
	for (int i = 0; i < _idx; i++)
	{
		newMate[i] = cp._mat[i];
		delete _mat[i];
	}
	for (int i = _idx; i < 4; i++)
		newMate[i] = 0;
	delete _mat;
	_mat = newMate;
	return (*this);
}

Character::~Character()
{
	delete _mat;
}

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	if (_idx == 3)
		return ;
	_mat[_idx] = m;
	_idx++;
}

void Character::unequip(int idx)
{
	if (idx > _idx)
		return ;
	_mat[idx] = 0;
	if (idx < _idx)
	{
		int j;
		for (int i = idx; i < 3; i++)
		{
			j = idx + 1;
			_mat[i] = _mat[j];
		}
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (_mat[idx])
		_mat[idx]->use(target);
}