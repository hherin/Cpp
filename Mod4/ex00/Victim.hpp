/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 11:18:48 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/10 14:45:44 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{
	public:
		Victim();
		Victim(std::string name);
		Victim(Victim const&);
		virtual ~Victim();
		Victim& operator=(Victim const&);
		std::string& getName();
		virtual void getPolymorphed() const;

	protected:
		std::string name;
};

std::ostream& operator<<(std::ostream &os, Victim &obj);

#endif