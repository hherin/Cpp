/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 23:24:21 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/28 12:56:24 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string.h>

#include "classTest.hpp"

int main(void)
{
	std::cout << "-------------Test with char---------------\n";
	char s[] = "abcdef";
	std::cout << s << std::endl;
	::iter(s, strlen(s), incIter<char>);
	std::cout << s << std::endl;

	std::cout << "\n--------------Test with int------------------\n";
	int tab[5] = {1, 2, 3, 4, 5};
	for (int i = 0; i < 5; i++)
		std::cout << tab[i] << " ";
	std::cout << std::endl;
	::iter(tab, 5, incIter<int>);
	for (int i = 0; i < 5; i++)
		std::cout << tab[i] << " ";

	std::cout << "\n--------------Test with class------------------\n";
	Awesome tab2[5];
	::iter(tab2, 5, print<Awesome>);

}