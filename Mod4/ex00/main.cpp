/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 11:48:22 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/12 11:43:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

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
	
	return 0;
}