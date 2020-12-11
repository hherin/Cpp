/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 18:04:27 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/11 11:27:01 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name)
	: _name(name), _hp(40), _weap(0)
{
}

Character::Character(Character const &cp)
{
	this->_name = cp._name;
	this->_hp = cp._hp;
	this->_weap = cp._weap;
}

Character& Character::operator=(Character const &cp)
{
	if (this == &cp)
		return (*this);
	this->_name = cp._name;
	this->_hp = cp._hp;
	this->_weap = cp._weap;
	return (*this);
}

Character::~Character()
{
	delete _weap;
}

void Character::recoverAP()
{
	_hp += 10;
	if (_hp > 40)
		_hp = 40;
}

void Character::equip(AWeapon *wea)
{
	_weap = wea;
}

void Character::attack(Enemy *badass)
{
	if (_hp >= _weap->getAPCost()){
		std::cout << _name << " attacks " << badass->getType() << " with a ";
		std::cout << _weap->getName() << std::endl;
		_weap->attack();
		_hp -= _weap->getAPCost();
		badass->takeDamage(_weap->getDamage());
		if (!_hp)
			delete _weap;
	}

}

std::string const& Character::getName() const
{
	return (_name);
}

int Character::getHP() const
{
	return (_hp);
}

std::string const& Character::getWeapName() const
{
	return (_weap->getName());
}

bool Character::isArmed() const
{
	return (this->_weap);
}

std::ostream& operator<<(std::ostream& os, Character const &perso)
{
	os << perso.getName() << " has " << perso.getHP();
	if (!perso.isArmed())
		os << " and is unarmed\n";
	else{
		os << " and wields a " << perso.getWeapName() << "\n";
	}
	return (os);
}
