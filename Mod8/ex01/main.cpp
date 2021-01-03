/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 11:32:31 by heleneherin       #+#    #+#             */
/*   Updated: 2021/01/03 15:44:22 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <time.h>

int main()
{
	Span sp = Span(5);
	std::cout << "----------Test exceptions--------------\n";
	try{
		std::cout << "shortestSpan:\t" << sp.shortestSpan() << std::endl;
	}
	catch (std::exception const &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << "longestSpan:\t" << sp.longestSpan() << std::endl;
	}
	catch (std::exception const &e){
		std::cout << e.what() << std::endl;
	}
	try{
		sp.multiAddNumber(100);
	}
	catch (std::exception const &e){
		std::cout << "multiadd:\t" << e.what() << std::endl;
	}
	std::cout << "\n-------------Test subject--------------\n";
	Span sp2 = Span(5);
	try{
		sp2.addNumber(5);
		sp2.addNumber(3);
		sp2.addNumber(17);
		sp2.addNumber(9);
		sp2.addNumber(11);
	}
	catch (std::exception const &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch (std::exception const &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n-------------Test multi addnumb--------------\n";
	Span sp1(1000);
	try{
		sp1.multiAddNumber(1000);
		std::cout << "add 1000 element to sp1\n";
	}
	catch (std::exception const &e){
		std::cout << e.what() << std::endl;
	}
	try{
		sp1.multiAddNumber(2);
	}
	catch (std::exception const &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "shortestSpan:\t" << sp1.shortestSpan() << std::endl;
	std::cout << "longestSpan:\t" << sp1.longestSpan() << std::endl;
}