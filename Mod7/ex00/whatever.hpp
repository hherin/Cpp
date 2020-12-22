/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 18:45:45 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/21 23:08:18 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void swap(T &t1, T &t2)
{
	T tmp;
	tmp = t1;
	t1 = t2;
	t2 = tmp;
}

template<typename T>
T min(T const &t1, T const &t2)
{
	if (t1 < t2)
		return t1;
	return t2;
}

template<typename T>
T max(T const &t1, T const &t2)
{
	if (t1 > t2)
		return t1;
	return t2;
}

#endif

// • max: Compares the two arguments and returns the biggest one. If the two arguments are equal, then it returns the second one.
