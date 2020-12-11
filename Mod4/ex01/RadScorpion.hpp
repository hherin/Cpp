/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:42:53 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/11 11:19:48 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion(int hp = 80, std::string const &type="RadScorpion");
		RadScorpion(RadScorpion const&);
		RadScorpion& operator=(RadScorpion const&);
		~RadScorpion();
		// virtual void takeDamage(int);
};

#endif