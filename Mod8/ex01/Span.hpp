/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 11:34:27 by heleneherin       #+#    #+#             */
/*   Updated: 2021/01/03 14:08:45 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <exception>
# include <vector>
# include <algorithm>
# include <limits.h>
# include <iostream>

class Span
{
	public:
		Span(unsigned int i=0);
		Span(Span const&);
		Span &operator=(Span const&);
		~Span();
		void addNumber(int nb);
		void multiAddNumber(unsigned int);
		int shortestSpan(void);
		int longestSpan(void);
		class ArrayIsFull;
		class NoSpanToFind;

	private:
		unsigned int	_initSize;
		std::vector<int> _span;
};


class Span::ArrayIsFull : public std::exception
{
	public:
		ArrayIsFull(){}
		const char* what() const throw(){
			return "You can't add numbers anymore.";
		}
};

class Span::NoSpanToFind : public std::exception
{
	public:
		NoSpanToFind(){}
		const char* what() const throw(){
			return "There is no span to find.";
		}
};

#endif