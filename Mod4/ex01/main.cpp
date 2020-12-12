/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 16:11:09 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/12 12:04:14 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Character.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
	Character* me = new Character("me");
	
	std::cout << *me;
	
	Enemy* b = new RadScorpion();
	
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	std::cout << *me;
	
	std::cout << "\n-----TESTS RADSCORPION-----\n";
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	
	std::cout << "\n-----TESTS SUPERMUTANT-----\n";
	b = new SuperMutant();

	me->recoverAP();
	me->attack(b);
	me->attack(b);
	
	me->equip(pf);
	std::cout << *me;

	me->attack(b);
	me->attack(b);
	
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	
	me->attack(b);

	delete me;
	delete pf;
	delete pr;
	// delete b;
	return (0);
}