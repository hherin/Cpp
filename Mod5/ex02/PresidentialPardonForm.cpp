/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 21:24:01 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/17 21:26:56 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string n)
	: Form(n, 5, 25)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cp)
	: Form(cp)
{}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &cp)
{
	if (this != &cp)
		this->Form::_sign = cp.Form::_sign;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!Form::_sign)
		throw Form::FormNotSigned();
	if (executor.getGrade() > Form::_signGrade)
		throw Form::GradeTooLowException();
	std::cout << Form::_name << " has been pardoned by Zafod Beeblebrox\n";
}