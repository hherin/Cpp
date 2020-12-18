/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 16:26:08 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/17 21:00:13 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string n="Bill", int exGrd=75, int sigGrd=40);
		virtual ~Form(){}
		Form(Form const&);
		Form& operator=(Form const&);
		std::string getName() const;
		bool getSign() const;
		int getExecGrade() const;
		int getSignGrade() const;
		void beSigned(Bureaucrat const&);
		virtual void execute(Bureaucrat const &) const = 0;
		class GradeTooHighException;
		class GradeTooLowException;
		class FormNotSigned;

	protected:
		std::string const _name;
		bool _sign;
		int const _execGrade;
		int const _signGrade;
};


class Form::GradeTooHighException : public std::exception
{
	public:
		GradeTooHighException(){}
		const char *what() const throw(){
			return "GRADE IS TOO HIGH\n";
		}
};

class Form::GradeTooLowException : public std::exception
{
	public:
		GradeTooLowException(){}
		const char *what() const throw(){
			return "GRADE IS TOO LOW\n";
		}
};

class Form::FormNotSigned : public std::exception
{
	public:
		FormNotSigned(){}
		const char* what() const throw(){
			return "FORM IS NOT SIGNED\n";
		}
};

std::ostream& operator<<(std::ostream &op, Form const &);

#endif

