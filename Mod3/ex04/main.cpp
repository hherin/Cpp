/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:20:14 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/09 19:21:24 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

int main(void)
{
	srand(time(0));

	// std::cout << std::endl;
	// std::cout << "\t\tFragTrap Test\n";
	// FragTrap fr("GR");
	// fr.takeDamage(30);
	// fr.meleeAttack("grumo");
	// {
	// 	FragTrap fr1(fr);
	// 	fr1.rangedAttack("grumo");
	// 	fr1.takeDamage(70);
	// 	fr1.beRepaired(40);
	// }
	// fr.vaulthunter_dot_exe("grumo");
	// fr.vaulthunter_dot_exe("grumo");
	// fr.vaulthunter_dot_exe("grumo");

	// std::cout << std::endl;
	// std::cout << "\t\tScavTrap Test\n";
	// ScavTrap sc("JU");
	// sc.challengeNewcomer("kol");
	// sc.meleeAttack("kol");
	// sc.rangedAttack("kol");
	// sc.beRepaired(30);
	// {
	// 	ScavTrap sc1 = sc;
	// 	sc1.challengeNewcomer("kol");
	// 	sc1.challengeNewcomer("kol");
	// 	sc1.challengeNewcomer("kol");
	// 	sc1.challengeNewcomer("kol");
	// }

	// std::cout << std::endl;
	// std::cout << "\t\tNinjaTrap Test\n";
	// NinjaTrap ni("NU");
	// ni.NinjaShoeBox(fr);
	// ni.NinjaShoeBox(fr);
	// ni.NinjaShoeBox(sc);
	// ni.NinjaShoeBox(sc);
	// ni.NinjaShoeBox(ni);
	// ni.NinjaShoeBox(ni);

	// std::cout << std::endl;
	// std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "\t\tSuperTrap Test\n";
	SuperTrap super("hello");

	std::cout << std::endl << std::endl;
	{
		SuperTrap super1(super);
		super1.meleeAttack("gumo");
		super1.takeDamage(20);
	}

	super.rangedAttack("Bufle");
	super.meleeAttack("mool");

	return (0);
}