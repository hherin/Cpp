/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 21:36:49 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/03 11:21:26 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain(): neurone(1)
{}

std::string Brain::identify() const
{
	std::ostringstream oss;
	(void)neurone;
	oss << this;
	return (oss.str());
}