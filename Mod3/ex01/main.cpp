/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:20:14 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/08 19:23:41 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fragtrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	srand(time(0));
	Fragtrap fragtp("Bib");
	fragtp.rangedAttack("grumo");
	ScavTrap scavtp("Juj");
	fragtp.takeDamage(30);
	scavtp.challengeNewcomer("kol");
	fragtp.meleeAttack("grumo");
	fragtp.beRepaired(10);
	scavtp.meleeAttack("kol");
	fragtp.vaulthunter_dot_exe("grumo");
	scavtp.rangedAttack("kol");
	fragtp.rangedAttack("grumo");
	fragtp.takeDamage(50);
	scavtp.challengeNewcomer("kol");
	scavtp.beRepaired(30);
	fragtp.vaulthunter_dot_exe("grumo");
	fragtp.vaulthunter_dot_exe("grumo");
	fragtp.vaulthunter_dot_exe("grumo");
	fragtp.vaulthunter_dot_exe("grumo");

	return (0);
}