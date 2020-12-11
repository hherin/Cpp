/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:33:40 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/10 17:40:16 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant(int hp = 170, std::string const &type="SuperMutant");
		SuperMutant(SuperMutant const&);
		SuperMutant& operator=(SuperMutant const&);
		~SuperMutant();
		virtual void takeDamage(int);
};

#endif