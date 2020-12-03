/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 00:34:03 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/03 12:48:58 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileChecker.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Wront input\n";
		return 1;
	}
	fileClass file;
	file.setAttribut(av[1], av[2], av[3]);
	if (!file.fileInBuf())
		return (1);
	return (0);
}