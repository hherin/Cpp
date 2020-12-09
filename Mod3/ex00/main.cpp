/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:20:14 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/08 18:10:40 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fragtrap.hpp"

int main(void)
{
	srand(time(0));
	Fragtrap fragtp("bib");
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