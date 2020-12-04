/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 11:01:38 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/04 11:30:54 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(int fixedPt);
		Fixed(const Fixed &);
		Fixed& operator= (const Fixed &);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		int fixedPoint;
		static const int fractBit = 8;
};

#endif