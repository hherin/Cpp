/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 11:57:03 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/11 18:16:12 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"

int main()
{
	std::cout << "Scout assault team launched!\n";
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* tom = bob->clone();
	ISquad* vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);
	vlc->push(tom);

	std::cout << "\n\nScout assault team meet ennemies!\n";
	std::cout << "-----------------------------------------\n";
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << "\nFirst wave of reinforcements launched:\n";
	Squad reinforcements;
	reinforcements.push(bob->clone());
	reinforcements.push(jim->clone());

	std::cout << "\nSecond wave of reinforcements launched:\n";
	Squad reinforcements2(reinforcements);

	std::cout << "\nThird wave of reinforcements launched:\n";
	Squad reinforcements3;
	reinforcements3 = reinforcements;

	std::cout << "\n\nFirst wave of reinforcements joined the fight!\n";
	std::cout << "-----------------------------------------\n";
	for (int i = 0; i < reinforcements.getCount(); ++i)
	{
		ISpaceMarine* cur = reinforcements.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "\n\nSecond wave of reinforcements joined the fight!\n";
	std::cout << "-----------------------------------------\n";
	for (int i = 0; i < reinforcements2.getCount(); ++i)
	{
		ISpaceMarine* cur = reinforcements2.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "\n\nThird wave of reinforcements joined the fight!\n";
	std::cout << "-----------------------------------------\n";
	for (int i = 0; i < reinforcements3.getCount(); ++i)
	{
		ISpaceMarine* cur = reinforcements3.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "\nDeleting heap allocation:\n\n";
	delete vlc;
	std::cout << "\nDeleting stack allocation:\n\n";
	return (0);
}