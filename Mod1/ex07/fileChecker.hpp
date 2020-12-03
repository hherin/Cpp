/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileChecker.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 00:45:02 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/03 12:46:00 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILECHECKER_HPP
# define FILECHECKER_HPP

#include <fstream>

class fileClass
{
	public:
		void setAttribut(const std::string, const std::string, const std::string);
		int fileInBuf(void);

	private:
		std::string filename;
		std::string rep1;
		std::string rep2;
};

#endif