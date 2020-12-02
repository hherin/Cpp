/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 21:36:49 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/02 22:06:47 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain(): neurone(1)
{}

std::string Brain::identify() const
{
	std::ostringstream oss;
	std::string add;

	oss << &neurone;
	add = oss.str();
	return (add);
}