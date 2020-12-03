/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileChecker.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 00:48:17 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/03 14:20:52 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileChecker.hpp"

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
	std::string repFilename;
	std::size_t found;

	if (!fich){
		std::cout << "Can't open the file\n";
		return 0;
	}
	if (rep1.empty() || rep2.empty())
	{
		std::cout << "Can't handle empty string output\n";
		return (0);
	}
	repFilename = filename.append("replace");
	std::ofstream outfile(repFilename.c_str());
	buf << fich.rdbuf(); // copier l'intégralité du fichier dans le buffer
	line = buf.str();
	while ((found = line.find(rep1.c_str())) != std::string::npos)
		line.replace(found, rep1.length(), rep2.c_str());
	outfile << line;
	outfile.close();
	return (1);
}