/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deserialize.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 17:49:49 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/21 17:59:50 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data { std::string s1; int n; std::string s2; };

Data *deserialize(void * raw)
{
	Data *d= new Data;

	for(int i = 0; i < 8; i++)
		d->s1 += *(reinterpret_cast<char*>(raw) + i);
	d->n = *(reinterpret_cast<int*>(raw) + 2);
	for(int i = 12; i < 20; i++)
		d->s2 += *(reinterpret_cast<char*>(raw) + i);
	return d;
}