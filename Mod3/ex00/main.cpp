/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:20:14 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/09 19:25:54 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	srand(time(0));
	FragTrap fragtp("bib");
	fragtp.rangedAttack("grumo");
	fragtp.takeDamage(30);
	fragtp.meleeAttack("grumo");
	fragtp.beRepaired(10);
	fragtp.vaulthunter_dot_exe("grumo");
	fragtp.rangedAttack("grumo");
	fragtp.takeDamage(50);
	fragtp.vaulthunter_dot_exe("grumo");
	fragtp.vaulthunter_dot_exe("grumo");
	fragtp.vaulthunter_dot_exe("grumo");
	fragtp.vaulthunter_dot_exe("grumo");

	return (0);
}