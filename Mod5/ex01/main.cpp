/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 11:41:38 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/17 19:01:59 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void)
{
	std::cout << "------Test constructor fail-----\n";
	try{
		Form contract("contract", 151);
	}
	catch (std::exception &e){
		std::cout << "contract form :" << e.what();
	}
	try{
		Form contract("contract", 0, 32);
	}
	catch (std::exception &e){
		std::cout << "contract form :" << e.what();
	}

	try{
		Form bill("bill", 23, 0);
	}
	catch (std::exception &e){
		std::cout << "bill form :"  << e.what();
	}
	try{
		Form bill("bill", 151, 43);
	}
	catch (std::exception &e){
		std::cout << "bill form :"  << e.what();
	}
	std::cout << "\n---------Test bureaucrat sign form-------\n";
	Bureaucrat john("John", 60);
	Form bill("bill", 75, 10);
	Form bill2("bill2", 75, 100);
	john.signForm(bill);
	john.signForm(bill2);
	bill2.beSigned(john);
	std::cout << "\n-----------operator <<--------------\n";
	std::cout << bill << bill2;
}