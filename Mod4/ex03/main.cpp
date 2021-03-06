/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 22:21:02 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/11 23:58:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int main()
{
	Ice* ice = new Ice();
	Cure* cure = new Cure();
	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(ice);
	src->learnMateria(cure);
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;

	Character* jim = new Character("Jim");
	
	AMateria *tmp2 = src->createMateria("ice");
	
	jim->equip(tmp2);
	jim->equip(src->createMateria("ice"));
	jim->equip(src->createMateria("ice"));
	
	jim->unequip(0);
	jim->unequip(5);
	delete tmp2;
	
	jim->equip(src->createMateria("cure"));
	
	Character* jim2 = new Character(*jim);
	Character* jim3 = new Character("Henri");
	*jim3 = *jim;

	src->learnMateria(ice);
	src->learnMateria(ice);
	src->learnMateria(ice);
	
	jim2->use(0, *jim);
	jim2->use(1, *jim);
	jim2->use(3, *jim);

	jim3->use(0, *jim);
	jim3->use(1, *jim);
	jim3->use(3, *jim);

	delete src;
	delete ice;
	delete cure;
	
	delete jim;
	delete jim2;
	delete jim3;
	
	return (0);
}