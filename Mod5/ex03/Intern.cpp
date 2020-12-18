/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 22:41:14 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/18 20:01:14 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

typedef Form* (*funcArray)(std::string);

Intern::Intern(Intern const&cp)
{
	(void)cp;
}

Intern& Intern::operator=(Intern const&)
{
	return (*this);
}

Form* makeRobotomy(std::string name)
{
	return new RobotomyRequestForm(name);
}

Form* makeShrubbery(std::string name)
{
	return new ShrubberyCreationForm(name);
}

Form* makePresidential(std::string name)
{
	return new PresidentialPardonForm(name);
}

Form* Intern::makeForm(std::string f, std::string target)
{
	funcArray form[3] = {makeRobotomy, makeShrubbery, makePresidential};
	const char* type[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	std::string tmp;

	for (int i = 0; i < 3; i++){
		tmp = type[i];
		if (tmp == f)
			return form[i](target);
	}
	std::cout << "Form unfound\n";
	return NULL;
}