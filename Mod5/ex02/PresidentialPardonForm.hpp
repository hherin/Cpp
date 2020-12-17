/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 21:21:44 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/17 21:23:53 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string);
		~PresidentialPardonForm(){}
		PresidentialPardonForm(PresidentialPardonForm const&);
		PresidentialPardonForm& operator=(PresidentialPardonForm const&);
		virtual void execute(Bureaucrat const &) const;
};

#endif