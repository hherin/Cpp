/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 20:09:42 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/02 13:04:44 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <time.h>
#include <string>

class Pony
{
	public:
		Pony();
		~Pony();
		void create_randompony(std::string pos);

	private:
		bool gender;
		bool eating;
};

#endif