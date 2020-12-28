/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 11:47:53 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/25 18:38:18 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <algorithm>

int main(void)
{
	std::vector<int> vecInt;
	vecInt.push_back(10);
	vecInt.push_back(20);
	vecInt.push_back(30);
	vecInt.push_back(40);
	vecInt.push_back(50);

	std::cout << "------If there is an occurence----------\n";
	try{
		int nb = easyfind(vecInt, 10);
		std::cout << nb << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n------------Without occurence-----------\n";
	try{
		int nb = easyfind(vecInt, 100);
		std::cout << nb << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}