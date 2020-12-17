/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 16:18:40 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/17 16:22:31 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRATE_HPP
# define BUREAUCRATE_HPP

# include <iostream>
# include <exception>

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

	private:
		std::string const _name;
		int _grade;
};

std::ostream &operator<<(std::ostream &op, Bureaucrat const &bc);

#endif