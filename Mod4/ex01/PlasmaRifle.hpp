/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 15:23:41 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/10 17:24:51 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle(std::string const &name="Plasma Rifle", int apcost=5, int damage=21);
		PlasmaRifle(PlasmaRifle const&);
		PlasmaRifle& operator=(PlasmaRifle const&);
		~PlasmaRifle();
		virtual void attack() const;
};


#endif