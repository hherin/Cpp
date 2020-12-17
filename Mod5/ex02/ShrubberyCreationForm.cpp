/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 19:33:55 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/17 21:06:05 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string n)
	: Form(n, 137, 145)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cp)
	: Form(cp)
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &cp)
{
	if (this != &cp)
		Form::_sign = cp.Form::_sign;
	return (*this);
}

const std::string tree = "\
              v .   ._, |_  .,\n\
           `-._\\/  .  \\ /    |/_\n\
               \\\\  _\\, y | \\//\n\
         _\\_.___\\\\, \\\\/ -.\\||\n\
           `7-,--.`._||  / / ,\n\
           /'     `-. `./ / |/_.'\n\
                     |    |//\n\
                     |_    /\n\
                     |-   |\n\
                     |   =|\n\
                     |    |\n\
--------------------/ ,  . \\--------._\n\
";

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!Form::_sign)
		throw Form::FormNotSigned();
	if (executor.getGrade() > Form::_signGrade)
		throw Form::GradeTooLowException();
	std::string filepath = Form::_name + "_shrubbery";
	std::ofstream file(filepath.c_str());
	file << tree;
	file.close();
}