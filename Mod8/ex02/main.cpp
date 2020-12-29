/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 15:13:26 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/29 17:05:06 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "mutantstack.hpp"

int main()
{
	std::cout << "----------------Class test----------------\n";
	std::cout << "Base object: ";
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;

	std::cout << "Copy : ";
	MutantStack<int> mut2(mstack);
	MutantStack<int>::iterator it2 = mut2.begin();
	MutantStack<int>::iterator ite2 = mut2.end();
	while (it2 != ite2)
	{
		std::cout << *it2 << " ";
		++it2;
	}
	std::cout << std::endl;

	std::cout << "operator=: ";
	MutantStack<int> mut3;
	mut3 = mstack;
	MutantStack<int>::iterator it3 = mut3.begin();
	MutantStack<int>::iterator ite3 = mut3.end();
	while (it3 != ite3)
	{
		std::cout << *it3 << " ";
		++it3;
	}
	std::cout << std::endl;

	std::cout << "\n--------------Iterator test--------------\n";
	std::cout << "iterator++: ";
	it = mstack.begin();
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
	std::cout << "iterator--: ";
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	while (rit != rite)
	{
		std::cout << *rit << " ";
		++rit;
	}
	std::cout << std::endl;
	return 0;
}