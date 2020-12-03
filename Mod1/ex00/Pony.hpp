/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 20:09:42 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/03 12:58:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <time.h>
#include <string>
#include <cstdlib>

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