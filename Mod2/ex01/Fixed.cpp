/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 11:16:17 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/07 17:39:43 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): fixedPoint(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &cp)
{
	std::cout << "Copy constructor called\n";
	fixedPoint = cp.fixedPoint;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called\n";
	fixedPoint = nb << fractBit;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called\n";
	fixedPoint = nb * (float)(1 << fractBit);
}

Fixed& Fixed::operator=(const Fixed &cp)
{
	std::cout << "Assignation operator called\n";
	if (this == &cp)
		return (*this);
	fixedPoint = cp.fixedPoint;
	return (*this);
}

std::ostream& operator<<(std::ostream &st, const Fixed &cp)
{
	st << cp.toFloat();
	return (st);
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

float Fixed::toFloat(void) const
{
	return (((float)fixedPoint / (float)(1 << fractBit)));
}

int Fixed::toInt(void) const
{
	return (fixedPoint / (1 << fractBit));
}