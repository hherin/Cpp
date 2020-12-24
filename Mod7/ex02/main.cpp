/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 11:54:47 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/24 20:42:49 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(void)
{
	Array<int> intArray(5);
	Array<int> emptyArray;
	Array<int> tmp(intArray);

	std::cout << "-------------Test constructor-------------\n";
	std::cout << "default constructor: " << emptyArray.getSize() << std::endl;
	std::cout << "constructor with param: " << intArray.getSize() << std::endl;

	std::cout << "\n----------Test operator= -----------\n";
	emptyArray = intArray;
	std::cout << "emptyArray new size: " << emptyArray.getSize() << std::endl;
	std::cout << "constructor copy test: " << tmp.getSize() << std::endl;

	std::cout << "\n-------------Test operator[]-----------\n";
	std::cout << "old value: " << intArray[1] << std::endl;
	try{
		intArray[1] = 100;
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	std::cout << "new value: " << intArray[1] << std::endl;
	std::cout << "\nold value: " << intArray[1] << std::endl;
	try{
		intArray[20] = 100;
		std::cout << "new value: " << intArray[20] << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}


}