/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:21:22 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/02 17:43:45 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
	Zombie();
	void announce();
	void set_ZombieType(std::string type);
	void set_ZombieName(std::string nameEvent);
	void set_randomName(void);

	private:
	std::string type;
	std::string name;
};

#endif