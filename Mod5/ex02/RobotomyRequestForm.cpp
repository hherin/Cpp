/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 21:00:43 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/17 21:19:41 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

static bool _robot = 0;

RobotomyRequestForm::RobotomyRequestForm(std::string n)
	: Form(n, 45, 72)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cp)
	: Form(cp)
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &cp)
{
	if (this != &cp)
		this->Form::_sign = cp.Form::_sign;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!Form::_sign)
		throw Form::FormNotSigned();
	if (executor.getGrade() > Form::_signGrade)
		throw Form::GradeTooLowException();
	if (!_robot){
		std::cout << Form::_name << " has been robotized\n";
		_robot = 1;
	}
	else{
		_robot = 0;
		std::cout << "It's a failure\n";
	}

}