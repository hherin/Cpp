/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:02:51 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/12 12:24:02 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type)
	: _hp(hp), _type(type)
{}

Enemy::Enemy(Enemy const &cp)
{
	this->_hp = cp._hp;
	this->_type = cp._type;
}

Enemy& Enemy::operator=(Enemy const&cp)
{
	if (this == &cp)
		return (*this);
	this->_hp = cp._hp;
	this->_type = cp._type;
	return (*this);
}

Enemy::~Enemy()
{}

std::string const& Enemy::getType() const
{
	return (_type);
}

int Enemy::getHP() const
{
	return (_hp);
}

void Enemy::takeDamage(int dam)
{
	if (dam < 0)
		return ;
	_hp -= dam;
	if (_hp < 0){
		_hp = 0;
		delete this;
	}
}