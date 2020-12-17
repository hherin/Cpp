/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 17:16:46 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/17 16:23:16 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class Bureaucrat::GradeTooHighException : public std::exception
{
	public:
	GradeTooHighException() {}
	const char *what() const throw (){
		return "GRADE IS TOO HIGH\n";
	}
};

class Bureaucrat::GradeTooLowException : public std::exception
{
	public:
	GradeTooLowException(){}
	const char *what() const throw (){
		return "GRADE IS TOO LOW\n";
	}
};

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

std::ostream &operator<<(std::ostream &op, Bureaucrat const &bc)
{
	op << "<" << bc.getName() << ">, bureaucrat grade <" << bc.getGrade() << ">\n";
	return op;
}