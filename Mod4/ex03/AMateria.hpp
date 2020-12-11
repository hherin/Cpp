/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 18:26:02 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/11 21:18:19 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
class ICharacter;

class AMateria
{
	public:
		AMateria(std::string const &type="def");
		AMateria(AMateria const &);
		AMateria &operator=(AMateria const &);
		virtual ~AMateria(){}
		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string _type;
		unsigned int _xp;
};

#endif