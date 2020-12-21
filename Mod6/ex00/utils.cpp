/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 16:33:21 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/21 16:41:20 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"

bool isAllDigit(std::string const &s)
{
	for (size_t i = 0; i < s.size(); i++)
	{
		if ((i && !isdigit(s[i])) || (s[0] != '-' && !isdigit(s[0])))
			return 0;
	}
	return 1;
}

bool isFloatDouble(std::string const &s)
{
	int i = 0;
	int save;
	if (s[i] == '-')
		i++;
	while (isdigit(s[i]))
		i++;
	if (s[i] != '.')
		return 0;
	i++;
	save = i;
	while (isdigit(s[i]))
		i++;
	if (i != save && (s[i] == 'f' || !s[i]))
		return 1;
	return 0;
}

bool isPseudoLitterals(std::string const &s)
{
	if (!s.compare("nan") || !s.compare("nanf") || !s.compare("+inf")
		|| !s.compare("-inf") || !s.compare("+inff") || !s.compare("-inff"))
		return 1;
	return 0;
}

void pseudoProcess(std::string const &s)
{
	double n;
	std::string sign = "";
	if (!s.compare("+inf") || !s.compare("+inff")){
		n = std::numeric_limits<double>::infinity();
		sign = "+";
	}
	else if (!s.compare("-inf") || !s.compare("-inff"))
		n = -std::numeric_limits<double>::infinity();
	else
		n = std::numeric_limits<double>::quiet_NaN();
	std::cout << "char: impossible\n";
	std::cout << "int: impossible\n";
	std::cout << "float: " << sign << static_cast<float>(n) << "f" << std::endl;
	std::cout << "double: " << sign << static_cast<double>(n) << std::endl;
}

void everythingProcess(void *inp)
{
	std::cout << "char: ";
	if (*(static_cast<int*>(inp)) < -127)
		std::cout << "impossible\n";
	else if (*(static_cast<int*>(inp)) < 32 || *(static_cast<int*>(inp)) > 127)
		std::cout << "No displayable\n";
	else
		std::cout << *(static_cast<char*>(inp)) << std::endl;
	std::cout << "int: ";
	std::cout << *(static_cast<int*>(inp)) << std::endl;
	std::cout << "float: " << *(static_cast<float*>(inp)) << "f" << std::endl;
	std::cout << "double: " << *(static_cast<double*>(inp)) << std::endl;
}