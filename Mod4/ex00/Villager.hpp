/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   villager.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 11:28:44 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/16 11:51:16 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VILLAGER_HPP
# define VILLAGER_HPP

# include "Victim.hpp"

class Villager : public Victim
{
	public:
		Villager(std::string name="Kevin");
		Villager(Villager const&);
		~Villager();
		Villager& operator=(Villager const&);
		void screamQueen() const;
		void getPolymorphed() const;
};

#endif