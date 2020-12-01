/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 19:23:46 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/01 12:11:33 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <stdio.h>

int	main()
{
	std::string	input;
	Phonebook	pbook;

	std::cout << "*  Welcome in our crappy phonebook  *\n" << std::endl;
	while (1)
	{
		std::cout << "Choose an option between : ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
			pbook.input_process(0);
		else if (!input.compare("SEARCH"))
			pbook.input_process(1);
		else if (!input.compare("EXIT"))
			break;
		else
			std::cout << "\tWRONG INPUT : ";
	}
	return (0);
}