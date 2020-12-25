/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 11:54:47 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/25 01:23:12 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <string.h>

int main(void)
{
	Array<std::string> stringObj(3);
	Array<std::string> emptyArray;

	std::string elem1 = "salut";
	std::string elem2 = "cava";
	std::string elem3 = "super bien";

	Array<std::string> copyObj(stringObj);

	std::cout << "----------Test operator= -----------\n";
	std::cout << "default constructor: " << emptyArray.getSize() << std::endl;
	std::cout << "constructor with param: " << stringObj.getSize() << std::endl;
	std::cout << "constructor copy test: " << copyObj.getSize() << std::endl;

	std::cout << "\n-------------Test operator= -------------\n";
	emptyArray = stringObj;
	std::cout << "emptyArray new size: " << emptyArray.getSize() << std::endl;

	std::cout << "\n-------------Test operator[]-----------\n";
	try{
		stringObj[0] = elem1;
		stringObj[1] = elem2;
		stringObj[2] = elem3;
		std::cout << "stringObj[0]= " << stringObj[0] << std::endl;
		std::cout << "stringObj[1]= " << stringObj[1] << std::endl;
		std::cout << "stringObj[2]= " << stringObj[2] << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what();
	}

	std::cout << "\nexception: ";
	try{
		stringObj[20] = elem1;
	}
	catch(std::exception &e){
		std::cout << e.what();
	}
}