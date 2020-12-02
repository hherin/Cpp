/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 20:43:37 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/02 20:47:10 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void ref_print(std::string &s)
{
	std::cout << "reference out: " << s << std::endl;
}

void point_print(std::string *s)
{
	std::cout << "pointer out: " << *s << std::endl;
}

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	ref_print(str);
	point_print(&str);
}