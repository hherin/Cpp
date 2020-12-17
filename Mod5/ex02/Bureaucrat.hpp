/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 16:18:40 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/17 21:31:27 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRATE_HPP
# define BUREAUCRATE_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(std::string, int);
		~Bureaucrat() {}
		Bureaucrat& operator=(Bureaucrat const &);
		Bureaucrat(Bureaucrat const &);
		class GradeTooHighException;
		class GradeTooLowException;
		std::string getName() const;
		int getGrade() const;
		void incGrade();
		void decGrade();
		void signForm(Form const&) const;
		void executeForm(Form const & form) const;


	private:
		std::string const _name;
		int _grade;
};

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

std::ostream &operator<<(std::ostream &op, Bureaucrat const &bc);

#endif