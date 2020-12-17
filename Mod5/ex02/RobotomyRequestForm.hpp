/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 20:52:46 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/17 21:11:06 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string);
		~RobotomyRequestForm(){}
		RobotomyRequestForm(RobotomyRequestForm const&);
		RobotomyRequestForm& operator=(RobotomyRequestForm const&);
		virtual void execute(Bureaucrat const &) const;
};

#endif