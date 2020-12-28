/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 23:19:18 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/28 12:42:06 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T, typename F>
void iter(T tab[], int len, F func)
{
	for (int i = 0; i < len; i++)
		func(tab[i]);
}

template<typename T>
void incIter(T &t)
{
	t++;
}

#endif