/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 16:52:35 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/17 18:40:52 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string n, int exGrd, int sigGrd)
	: _name(n), _sign(0), _execGrade(exGrd), _signGrade(sigGrd)
{
	if (_execGrade > 150 || _signGrade > 150)
		throw GradeTooLowException();
	if (_execGrade < 1 || _signGrade < 1)
		throw GradeTooHighException();
}

Form::Form(Form const &cp)
	: _name(cp._name), _sign(cp._sign), _execGrade(cp._execGrade),
	_signGrade(cp._signGrade)
{
	*this = cp;
}

Form& Form::operator=(Form const &cp)
{
	if (this != &cp)
		_sign = cp._sign;
	return (*this);
}

std::string Form::getName() const
{
	return _name;
}

bool Form::getSign() const
{
	return _sign;
}

int Form::getExecGrade() const
{
	return _execGrade;
}

int Form::getSignGrade() const
{
	return _signGrade;
}

std::ostream& operator<<(std::ostream &op, Form const &f)
{
	op << "<" << f.getName() << "> is ";
	if (!f.getSign())
		op << "not signed\n";
	else
		op << "signed\n";
	return (op);
}