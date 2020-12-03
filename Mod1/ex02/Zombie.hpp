/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:21:22 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/03 13:01:28 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstdlib>

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