/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 11:54:47 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/25 01:07:52 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(void)
{
	Array<char*> charObj(3);
	Array<char*> emptyArray;

	char *elem1 = strdup("salut");
	char *elem2 = strdup("cava");
	char *elem3 = strdup("super bien");

	Array<char*> copyObj(charObj);

	std::cout << "\n----------Test operator= -----------\n";
	std::cout << "default constructor: " << emptyArray.getSize() << std::endl;
	std::cout << "constructor with param: " << charObj.getSize() << std::endl;
	std::cout << "constructor copy test: " << copyObj.getSize() << std::endl;

	std::cout << "-------------Test constructor-------------\n";
	emptyArray = charObj;
	std::cout << "emptyArray new size: " << emptyArray.getSize() << std::endl;

	std::cout << "\n-------------Test operator[]-----------\n";
	try{
		charObj[0] = strdup(elem1);
		charObj[1] = strdup(elem2);
		charObj[2] = strdup(elem3);
		std::cout << "charObj[0]= " << charObj[0] << std::endl;
		std::cout << "charObj[1]= " << charObj[1] << std::endl;
		std::cout << "charObj[2]= " << charObj[2] << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what();
	}

	std::cout << "\nexception: ";
	try{
		charObj[20] = elem1;
	}
	catch(std::exception &e){
		std::cout << e.what();
	}
	for (unsigned int i = 0; i < 3; i++)
		delete charObj[i];

}