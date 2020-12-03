/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 19:19:51 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/03 12:54:30 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact() : first_n(""), last_n(""), nickname(""), login(""),
postal(""), email(""), phone(""), birthday(""), meal(""),
underwear(""), secret("")
{
}

std::string data_loop(std::string msg)
{
	std::string str;
	do {
		std::cout << msg;
		std::getline(std::cin, str);
	} while (!str.compare(""));
	return (str);
}

void Contact::set_value(void)
{
	first_n = data_loop("\nFirst name : ");
	last_n = data_loop("Last name : ");
	nickname = data_loop("Nickname : ");
	login = data_loop("Login : ");
	postal = data_loop("Postal Address : ");
	email = data_loop("Email Address : ");
	phone = data_loop("Phone Number : ");
	birthday = data_loop("Birthday Date : ");
	meal = data_loop("Favorite Meal : ");
	underwear = data_loop("Color of Underwear : ");
	secret = data_loop("Darkest Secret : ");
	std::cout << std::endl;
}

std::string trunc_str(std::string str)
{
	std::string ret;
	size_t len = str.size();
	if (len > 10)
		ret = str.substr(0, 9) + '.';
	else
		ret = str;
	return (ret);
}

void	Contact::show_data_board(int index) const
{
	std::cout << "|" << std::setw(10) << index << "|" << std::setw(10) << trunc_str(first_n) << "|";
	std::cout << std::setw(10) << trunc_str(last_n) << "|" << std::setw(10) << trunc_str(nickname) <<"|";
	std::cout << std::endl;
}

int print_border(int detail = 0)
{
	int nb = 45;
	while (nb){
	std::cout << "-";
	nb--;
	}
	std::cout << std::endl;
	if (detail){
		std::cout << "|" << std::setw(10) << "index" << "|" << std::setw(10) << "first name";
		std::cout << "|" << std::setw(10) << "last name" << "|";
		std::cout << std::setw(10) << "nickname" << "|" << std::endl;
	}
	return (1);
}

void Contact::show_all_data(void) const
{
	std::string loop;
	std::cout << "First name: " << first_n << std::endl;
	std::cout << "Last name: " << last_n << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Login: " << login << std::endl;
	std::cout << "Postal address: " << postal << std::endl;
	std::cout << "email address: " << email << std::endl;
	std::cout << "Phone number: " << phone << std::endl;
	std::cout << "Birthday date: " << birthday << std::endl;
	std::cout << "Favourite meal: " << meal << std::endl;
	std::cout << "Underwear color: " << underwear << std::endl;
	std::cout << "Darkest secret: " << secret << std::endl << std::endl;
	do{
		std::cout <<  "Press enter to continue\n";
		std::getline(std::cin, loop);
	} while (loop.compare(""));
}

Phonebook::Phonebook() : index(0)
{
}

void Phonebook:: display_phonebook(int index) const
{
	if (!index){
		std::cout << "\tNO CONTACT\n";
		return ;
	}
	int i = 0;
	std::string nb;
	(index > 0) ? print_border(1) : 0;
	while (i < index){
		cct[i].show_data_board(i + 1);
		i++;
	}
	(index > 0) ? print_border() : 0;
	do{
		std::cout << "Which index you want to print ?\n";
		std::getline(std::cin, nb);
		i = nb[0] - 48;
	} while (!(i > 0 && i < 9) || i > index);
	std::cout << std::endl;
	cct[i - 1].show_all_data();
}

void Phonebook::input_process(int opt)
{
	int i;
	i = 0;
	if (!opt) {
		if (index == 8) {
			std::cout << "\tPHONEBOOK IS FULL" << std::endl;
			return ;
		}
		cct[index].set_value();
		index++;
	}
	else
		display_phonebook(index);

}
