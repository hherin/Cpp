/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 17:37:32 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/21 18:00:47 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void * serialize(void);
struct Data { std::string s1; int n; std::string s2; };
Data * deserialize(void * raw);
int main(void)
{
	char *c = reinterpret_cast<char*>(serialize());
	std::cout << "--------------SERIALIZE---------------\n";
	std::cout << "first random char\n\t";
	for (int i = 0; i < 8; i++)
		std::cout << *(reinterpret_cast<char*>(c + i));
	std::cout << "\nfirst random int\n\t";
	std::cout << *(reinterpret_cast<int*>(c + 8));
	std::cout << "\nsecond random char\n\t";
	for (int i = 12; i < 20; i++)
		std::cout << *(reinterpret_cast<char*>(c + i));

	std::cout << "\n---------------DESERIALIZE---------------\n";
	Data *d = deserialize(c);
	std::cout << "first random char\n\t";
	std::cout << d->s1;
	std::cout << "\nfirst random int\n\t";
	std::cout << d->n;
	std::cout << "\nsecond random char\n\t";
	std::cout << d->s2 << std::endl;
}