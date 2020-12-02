/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:43:45 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/02 17:40:48 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <string>
#include <time.h>

class ZombieEvent
{
	public:
	ZombieEvent();
	~ZombieEvent();
	void setZombieType(std::string typeE);
	Zombie *newZombie(std::string name);
	Zombie *randomChump(void);

	private:
	std::string typeEvent;
};

#endif