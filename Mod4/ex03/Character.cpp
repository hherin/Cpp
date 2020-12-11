/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 20:56:51 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/12 00:01:24 by user42           ###   ########.fr       */
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
		_mat[i] = cp._mat[i]->clone();
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
		newMate[i] = cp._mat[i]->clone();
		delete _mat[i];
	}
	for (int i = _idx; i < 4; i++)
		newMate[i] = 0;
	delete[] _mat;
	_mat = newMate;
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete _mat[i];
	delete[] _mat;
}

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	if (_idx == 3)
		return ;
	int i = 0;
	while (i < 4)
	{
		if (!_mat[i]){
			_mat[i] = m;
			break;
		}
		i++;
	}
	_idx++;
}

void Character::unequip(int idx)
{
	if (idx > _idx)
		return ;
	_mat[idx] = 0;
	_idx--;
}

void Character::use(int idx, ICharacter& target)
{
	if (_mat[idx])
		_mat[idx]->use(target);
}