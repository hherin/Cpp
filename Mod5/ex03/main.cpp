/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 11:41:38 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/18 20:07:08 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Bureaucrat brat("brat", 130);
	Bureaucrat bob("bob", 10);
	Bureaucrat jim("jim", 2);

	std::cout << "---------Test ShrubberyCreationForm--------\n";
	Intern intern;

	Form *go = NULL;
	if ((go = intern.makeForm("shrubbery creation", "parc"))){
		try{
			go->execute(brat);
		}
		catch (std::exception &e){
			std::cout << e.what();
		}
		go->beSigned(brat);
		std::cout << "the form is now signed\n";
		try{
			go->execute(brat);
		}
		catch (std::exception &e){
			std::cout << e.what();
		}
		std::cout << "shrubbery form executed successfully\n";
	}
	std::cout << "---------Test RobotomyRequestForm--------\n";
	Form *rob = NULL;
	if ((rob = intern.makeForm("robotomy request", "Kim"))){

		try{
			rob->execute(bob);
		}
		catch (std::exception &e){
			std::cout << e.what();
		}
		rob->beSigned(bob);
		std::cout << "the form is now signed\n";
		for (int i = 0; i < 5; i++){
			try{
				rob->execute(bob);
			}
			catch (std::exception &e){
				std::cout << e.what();
			}
		}
	}
	std::cout << "---------Test Presidential Pardon--------\n";
	Form *pre = NULL;
	if ((pre = intern.makeForm("presidential pardon", "noob"))){
		try{
			pre->execute(jim);
		}
		catch (std::exception &e){
			std::cout << e.what();
		}
		pre->beSigned(jim);
		std::cout << "Form is now signed\n";
		try{
			pre->execute(jim);
		}
		catch (std::exception &e){
			std::cout << e.what();
		}
	}

	std::cout << "\n-----------Test exec in Bureaucrat class--------------\n";
	brat.executeForm(*go);
	brat.executeForm(*rob);
	brat.executeForm(*pre);

	std::cout << "\n-------------Test form unfound---------------------\n";
	intern.makeForm("bibi", "coco");

	delete go;
	delete rob;
	delete pre;
}