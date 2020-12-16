/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Kamikaze.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 12:22:04 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/16 13:09:08 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAMIKAZE_HPP
# define KAMIKAZE_HPP

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"
# include <iostream>

class Kamikaze : public ISquad
{
	public:
		Kamikaze();
		Kamikaze(Kamikaze const&);
		Kamikaze const& operator=(Kamikaze const&);
		~Kamikaze();
		int getCount() const;
		ISpaceMarine* getUnit(int) const;
		int push(ISpaceMarine*);

	private:
		ISpaceMarine **_kami;
		int nbUnits;
};

#endif