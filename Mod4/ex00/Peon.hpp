/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:29:41 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/16 16:12:15 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon(std::string name="Kevin");
		Peon(Peon const&);
		virtual ~Peon();
		Peon& operator=(Peon const&);
		std::string& getName();
		void getPolymorphed() const;
};

#endif