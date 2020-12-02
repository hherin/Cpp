/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 12:38:09 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/02 16:35:53 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap(void)
{
	Pony *onheap = new Pony;
	onheap->create_randompony("OnTheHeap ");
	std::cout << "PonyOnHeap deleted\n";
	delete onheap;
}

void ponyOnTheStack(void)
{
	Pony onstack;
	onstack.create_randompony("OnTheStack ");
}

int main(void)
{
	srand(time(NULL));
	ponyOnTheHeap();
	ponyOnTheHeap();

	ponyOnTheStack();
	ponyOnTheStack();
	return 0;
}