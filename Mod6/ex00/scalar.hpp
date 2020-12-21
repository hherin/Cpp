/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 10:20:50 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/21 16:41:51 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <ctype.h>
# include <iostream>
# include <iostream>
# include <iomanip>
# include <string.h>
# include <limits>
# include <math.h>

#define MAX_INT_INPUT (input.size() >= 10 && isdigit(input[0]) && nb < 0) || (input.size() >= 11 && !isdigit(input[0]) && nb > 0)

void	everythingProcess(void *inp);
void	pseudoProcess(std::string const &s);
bool	isAllDigit(std::string const &s);
bool	isFloatDouble(std::string const &s);
bool	isPseudoLitterals(std::string const &s);

#endif