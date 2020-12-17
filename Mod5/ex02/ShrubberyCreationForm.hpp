/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 19:05:16 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/17 20:59:48 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>
# include <sstream>

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string);
		~ShrubberyCreationForm(){}
		ShrubberyCreationForm(ShrubberyCreationForm const&);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const&);
		virtual void execute(Bureaucrat const &) const;
};

#endif