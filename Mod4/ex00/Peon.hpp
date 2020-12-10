/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:29:41 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/10 12:48:08 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon();
		Peon(std::string name);
		Peon(Peon const&);
		~Peon();
		Peon& operator=(Peon const&);
		std::string& getName();
		virtual void getPolymorphed() const;
};

#endif