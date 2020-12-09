/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:20:14 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/09 16:13:41 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	srand(time(0));
	FragTrap fr("GR");

	std::cout << std::endl;
	std::cout << "\t\tFragTrap Test\n";
	fr.takeDamage(30);
	fr.meleeAttack("grumo");
	{
		FragTrap fr1(fr);
		fr1.rangedAttack("grumo");
		fr1.takeDamage(70);
		fr1.beRepaired(40);
	}
	fr.vaulthunter_dot_exe("grumo");
	fr.vaulthunter_dot_exe("grumo");
	fr.vaulthunter_dot_exe("grumo");

	std::cout << std::endl;
	std::cout << "\t\tScavTrap Test\n";
	ScavTrap sc("JU");
	sc.challengeNewcomer("kol");
	sc.meleeAttack("kol");
	sc.rangedAttack("kol");
	sc.beRepaired(30);
	{
		ScavTrap sc1 = sc;
		sc1.challengeNewcomer("kol");
		sc1.challengeNewcomer("kol");
		sc1.challengeNewcomer("kol");
		sc1.challengeNewcomer("kol");
	}

	std::cout << std::endl;
	return (0);
}