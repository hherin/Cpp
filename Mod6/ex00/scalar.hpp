/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 10:20:50 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/23 15:21:34 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <ctype.h>
# include <iostream>
# include <iostream>
# include <iomanip>
# include <string.h>
# include <limits>
# include <limits.h>
# include <math.h>

#define MAX_INT_INPUT (input.size() >= 10 && isdigit(input[0]) && nb < 0) || (input.size() >= 11 && !isdigit(input[0]) && nb > 0)

void	pseudoProcess(std::string const &s);
bool	isAllDigit(std::string const &s);
bool	isFloatDouble(std::string const &s);
bool	isPseudoLitterals(std::string const &s);

template<typename T>
void everythingProcess(T inp)
{
	std::cout << "char: ";
	if (static_cast<int>(inp) < -127)
		std::cout << "impossible\n";
	else if (static_cast<int>(inp) < 32 || static_cast<int>(inp) > 127)
		std::cout << "No displayable\n";
	else
		std::cout << static_cast<char>(inp) << std::endl;
	std::cout << "int: ";
	if (static_cast<double>(INT_MIN) > static_cast<double>(inp) || static_cast<double>(INT_MAX) < static_cast<double>(inp)
		|| (inp > 0 && static_cast<int>(inp) < 0) || (inp < 0 && static_cast<int>(inp) > 0))
		std::cout << "overflow\n";
	else
		std::cout << static_cast<int>(inp) << std::endl;
	std::cout << "float: " << static_cast<float>(inp) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(inp) << std::endl;
}

#endif