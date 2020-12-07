/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 11:16:17 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/07 17:31:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): fixedPoint(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(int fixedPt): fixedPoint(fixedPt)
{
}
Fixed::Fixed(const Fixed &cp)
{
	std::cout << "Copy constructor called\n";
	fixedPoint = cp.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &cp)
{
	std::cout << "Assignation operator called\n";
	if (this == &cp)
		return (*this);
	fixedPoint = cp.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
	fixedPoint = raw;
}