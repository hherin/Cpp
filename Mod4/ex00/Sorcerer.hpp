/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 10:45:41 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/10 14:58:22 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
#include "Victim.hpp"

class Sorcerer
{
	public:
		Sorcerer(std::string name="Merlin", std::string type="l'Echanteur");
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