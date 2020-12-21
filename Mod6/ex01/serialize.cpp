/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 17:17:12 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/21 17:47:43 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void * serialize(void)
{
	char *ret = new char[20];
	const std::string alphanum = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int random;
	int i = 0;
	while (i < 8){
		random = rand() % (alphanum.size() - 1);
		ret[i] = alphanum[random];
		i++;
	}
	*(reinterpret_cast<int*>(ret + 8)) = rand();
	i = 0;
	while (i < 8)
	{
		random = rand() % (alphanum.size() - 1);
		ret[12 + i] = alphanum[random];
		i++;
	}
	return ret;
}