/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 11:41:38 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/17 15:02:28 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main(void)
{
	std::cout << "------Test when already in limit-----\n";
	Bureaucrat erwan("erwan", 150);
	Bureaucrat yoan("yoan", 1);
	try{
		erwan.incGrade();
	}
	catch (std::exception &e){
		std::cout << erwan.getName() << ":\t" << e.what();
	}
	try{
		yoan.decGrade();
	}
	catch (std::exception &e){
		std::cout << yoan.getName() << ":\t" << e.what();
	}

	std::cout << "\n---------Test multiple inc and dec-------\n";
	Bureaucrat paul("Paul", 1);
	for (int i=0 ; i < 4 ; i++){
		try{
			paul.incGrade();
		}
		catch (std::exception &e){
			std::cout << paul.getName() << ":\t" << e.what();
		}
	}
	try{
		paul.decGrade();
	}
	catch (std::exception &e){
		std::cout << paul.getName() << ":\t" << e.what();
	}
	std::cout << std::endl;

	Bureaucrat lucas("lucas", 7);
	for (int i=0 ; i < 8 ; i++){
		try{
			lucas.decGrade();
		}
		catch (std::exception &e){
			std::cout << lucas.getName() << ":\t" << e.what();
		}
	}
	try{
		lucas.incGrade();
	}
	catch (std::exception &e){
		std::cout << lucas.getName() << ":\t" << e.what();
	}

	std::cout << "\n---------- Test when constructor fail-------\n";
	try{
		Bureaucrat Simon("Simon", 0);
	}
	catch (std::exception &e){
		std::cout << "Simon" << ":\t" << e.what();
	}
	try{
		Bureaucrat jules("Jules", 151);
	}
	catch (std::exception &e){
		std::cout << "Jules" << ":\t" << e.what();
	}

	std::cout << "\n-----------operator <<--------------\n";
	std::cout << lucas << paul << yoan;
}