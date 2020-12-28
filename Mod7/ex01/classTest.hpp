/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classTest.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 12:35:23 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/28 12:55:35 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSTEST_HPP
# define CLASSTEST_HPP

#include <iostream>

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }

	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print(T const& x)
{
	std::cout << x << std::endl;
	return;
}

#endif