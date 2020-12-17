/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 17:16:46 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/17 21:34:57 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string n, int grd)
	: _name(n)
{
	if (grd < 1)
		throw GradeTooHighException();
	else if (grd > 150)
		throw GradeTooLowException();
	else
		_grade = grd;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &cp)
{
	if (this == &cp)
		return (*this);
	this->_grade = cp._grade;
	return (*this);
}

Bureaucrat::Bureaucrat(Bureaucrat const &cp)
	: _name(cp._name)
{
	*this = cp;
}

std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incGrade()
{
	if (getGrade() > 149)
		throw GradeTooLowException();
	_grade++;
	std::cout << _name << "-grade is now :\t" << _grade << std::endl;
}

void Bureaucrat::decGrade()
{
	if (getGrade() < 2)
		throw GradeTooHighException();
	_grade--;
	std::cout << _name << "-grade is now :\t" << _grade << std::endl;
}

void Bureaucrat::signForm(Form const &f) const
{
	if (this->getGrade() <= f.getSignGrade())
		std::cout << "<" << this->getName() << "> signs <" << f.getName() << ">\n";
	else{
		std::cout << "<" << this->getName() << "> cannot sign <" << f.getName();
		std::cout << "> because <not graded enough>\n";
	}
}

void Bureaucrat::executeForm(Form const &form) const
{
	if (_grade <= form.getExecGrade())
		std::cout << _name << " executes " << form.getName() << std::endl;
	else{
		std::cout << _name << " can't execute " << form.getName();
		std::cout << " because grade isn't high enough\n";
	}
}

std::ostream &operator<<(std::ostream &op, Bureaucrat const &bc)
{
	op << "<" << bc.getName() << ">, bureaucrat grade <" << bc.getGrade() << ">\n";
	return op;
}