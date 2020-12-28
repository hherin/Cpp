/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classTest.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 12:05:48 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/28 12:30:39 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSTEST_HPP
# define CLASSTEST_HPP

#include <iostream>

class Awesome {

	public:
		Awesome( int n ) : _n( n ) {}
		bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
		int getNb(){return _n;}
	private:
		int _n;
};

std::ostream& operator<<(std::ostream &op, Awesome &awe)
{
	op << awe.getNb();
	return op;
}

#endif