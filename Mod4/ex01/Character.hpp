/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 18:04:26 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/10 19:01:36 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	public:
		Character(std::string const & name);
		Character(Character const&);
		Character& operator=(Character const&);
		~Character();
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string const& getName() const;
		std::string const& getWeapName() const;
		bool isArmed() const;
		int getHP() const;

	private:
		std::string _name;
		int _hp;
		AWeapon *_weap;
};

std::ostream& operator<<(std::ostream& os, Character const &perso);

#endif