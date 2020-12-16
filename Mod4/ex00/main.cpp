/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 11:48:22 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/16 11:52:50 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Villager.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);

	std::cout << "\n-----TEST POLYMORPH-----\n";
	Victim* ptr = &joe;
	std::cout << robert << jim << *ptr;
	robert.polymorph(*ptr);
	ptr->getPolymorphed();

	std::cout << "\n-----TEST COPY-----\n";
	Peon bob("bob");
	bob = joe;
	Victim billy("billy");
	billy = jim;
	Sorcerer henri(robert);

	henri.polymorph(bob);
	henri.polymorph(billy);
	std::cout << "Henri is now named " << henri.getName() << "\n";


	std::cout << "\n-------TEST NAMES-------\n";
	std::cout << jim.getName() << "\n";
	std::cout << ptr->getName() << "\n\n";

	std::cout << "\n----TEST OTHER DERIVED CLASS----\n";
	Villager paul("Paul");
	paul.getPolymorphed();
	

	std::cout << "\n----Destructor called----\n";
	return 0;
}