/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 18:45:45 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/28 12:26:59 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void swap(T &t1, T &t2)
{
	T tmp = t1;
	t1 = t2;
	t2 = tmp;
}

template<typename T>
T& min(T &t1, T &t2)
{
	return ((t1 < t2) ? t1 : t2);
}

template<typename T>
T& max(T &t1, T &t2)
{
	return ((t1 > t2) ? t1 : t2);
}

#endif
