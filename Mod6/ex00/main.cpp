/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 16:19:39 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/22 11:16:29 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"

int main(int ac, char **av)
{
	if (ac != 2){
		std::cout << "wrong input\n";
		return 1;
	}
	std::string input = av[1];
	std::cout << std::setprecision(1) << std::fixed;
	if (input.size() == 1 && isalpha(input[0]))
		everythingProcess(input[0]);
	else if (isAllDigit(input)){
	int nb = atoi(input.c_str());
		if (MAX_INT_INPUT)
			std::cout << "Input overflow\n";
		else
			everythingProcess(nb);
	}
	else if(isFloatDouble(input))
		everythingProcess(atof(input.c_str()));
	else if (isPseudoLitterals(input))
		pseudoProcess(input);
	else{
		std::cout << "wrong input\n";
		return 1;
	}
	return 0;
}