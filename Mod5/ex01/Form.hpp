/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 16:26:08 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/17 19:01:23 by heleneherin      ###   ########.fr       */
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
		~Form(){}
		Form(Form const&);
		Form& operator=(Form const&);
		class GradeTooHighException;
		class GradeTooLowException;
		std::string getName() const;
		bool getSign() const;
		int getExecGrade() const;
		int getSignGrade() const;
		void beSigned(Bureaucrat const&);

	private:
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

std::ostream& operator<<(std::ostream &op, Form const &);

#endif

