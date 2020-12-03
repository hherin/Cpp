/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileChecker.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 00:48:17 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/03 12:46:36 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileChecker.hpp"
#include <iostream>
#include <sstream>

void fileClass::setAttribut(const std::string s, const std::string s1, const std::string s2)
{
	filename = s;
	rep1 = s1;
	rep2 = s2;
}

int fileClass::fileInBuf(void)
{
	std::ifstream fich(filename.c_str());
	std::stringstream buf; // variable contenant l'intégralité du fichier
	std::string line;
	std::size_t found;

	if (!fich){
		std::cout << "Can't open the file\n";
		return 0;
	}
	std::ofstream outfile (filename.append("replace"));
	buf << fich.rdbuf(); // copier l'intégralité du fichier dans le buffer
	line = buf.str();
	while ((found = line.find(rep1.c_str())) != std::string::npos){
		line.replace(found, rep1.length(), rep2.c_str());
	}
	outfile << line << std::endl;
	outfile.close();
	return (1);
}