/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 13:13:01 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/10 18:14:10 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
	public:
		AWeapon(std::string const &name="fusil", int apcost=1, int damage=15);
		AWeapon(AWeapon const &);
		AWeapon& operator=(AWeapon const &);
		virtual ~AWeapon();
		std::string const& getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;

	protected:
		std::string _name;
		int _actionPoint;
		int _damage;
};

#endif