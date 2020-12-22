/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 18:09:30 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/21 18:37:12 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

void identify_from_pointer(Base *p)
{
	Base *b = dynamic_cast<A*>(p);
	if (b)
		std::cout << "A\n";
	else
	{
		if ((b = dynamic_cast<B*>(p)))
			std::cout << "B\n";
		else
			std::cout << "C\n";
	}
}

void identify_from_reference(Base &p)
{
	Base b;
	char c;

	try{
		b = dynamic_cast<A&>(p);
		c = 'A';
	}
	catch (std::exception &e)
	{
		try{
			b = dynamic_cast<B&>(p);
			c = 'B';
		}
		catch (std::exception &e)
		{
			c = 'C';
		}
	}
	std::cout << c << std::endl;
}

int main(void)
{
	Base *b1;

	std::cout << "---------------Identify with pointer-------------\n";
	b1 = new B;
	identify_from_pointer(b1);
	delete b1;
	b1 = new A;
	identify_from_pointer(b1);
	delete b1;
	b1 = new C;
	identify_from_pointer(b1);
	delete b1;

	std::cout << "\n---------------Identify with reference-------------\n";
	A a1;
	identify_from_reference(a1);
	B b2;
	identify_from_reference(b2);
	C c1;
	identify_from_reference(c1);
}