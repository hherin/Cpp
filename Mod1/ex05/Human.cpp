/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 21:36:06 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/03 11:24:36 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

const Brain& Human::getBrain()
{
	return (brain);
}

std::string Human::identify() const
{
	return brain.identify();
}