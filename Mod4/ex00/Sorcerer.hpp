/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 10:45:41 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/10 12:28:42 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
#include "Victim.hpp"

class Sorcerer
{
	public:
		Sorcerer();
		Sorcerer(std::string name, std::string type);
		Sorcerer(Sorcerer const&);
		~Sorcerer();
		Sorcerer& operator=(Sorcerer const&);
		std::string& getName();
		std::string& getType();
		void polymorph(Victim const &);


	private:
		std::string name;
		std::string type;
};

std::ostream& operator<<(std::ostream &os, Sorcerer &obj);

#endif