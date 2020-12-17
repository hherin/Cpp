/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 11:41:38 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/17 21:43:05 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include <iostream>
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat brat("brat", 130);
	Bureaucrat bob("bob", 10);
	Bureaucrat jim("jim", 2);

	std::cout << "---------Test ShrubberyCreationForm--------\n";
	ShrubberyCreationForm go("parc");

	try{
		go.execute(brat);
	}
	catch (std::exception &e){
		std::cout << e.what();
	}
	go.beSigned(brat);
	std::cout << "the form is now signed\n";
	try{
		go.execute(brat);
	}
	catch (std::exception &e){
		std::cout << e.what();
	}

	std::cout << "---------Test RobotomyRequestForm--------\n";
	RobotomyRequestForm rob("Kim");

	try{
		rob.execute(bob);
	}
	catch (std::exception &e){
		std::cout << e.what();
	}
	rob.beSigned(bob);
	std::cout << "the form is now signed\n";
	for (int i = 0; i < 5; i++){
		try{
			rob.execute(bob);
		}
		catch (std::exception &e){
			std::cout << e.what();
		}
	}

	std::cout << "---------Test RobotomyRequestForm--------\n";
	PresidentialPardonForm pre("noob");
	try{
		pre.execute(jim);
	}
	catch (std::exception &e){
		std::cout << e.what();
	}

	std::cout << "\n-----------Test exec in Bureaucrat class--------------\n";
	brat.executeForm(go);
	brat.executeForm(rob);
	brat.executeForm(pre);
}