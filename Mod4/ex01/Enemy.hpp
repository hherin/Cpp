/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:02:09 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/10 18:12:56 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy
{
	public:
		Enemy(int hp = 0, std::string const &type="tiny");
		Enemy(Enemy const&);
		Enemy& operator=(Enemy const&);
		virtual ~Enemy();
		std::string const& getType() const;
		int getHP() const;
		virtual void takeDamage(int);

	protected:
		int _hp;
		std::string _type;
};

#endif