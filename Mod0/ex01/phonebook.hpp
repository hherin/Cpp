/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 19:13:25 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/01 12:14:12 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	public:
	Contact();
	void set_value(void);
	void show_data_board(int index) const;
	void show_all_data(void) const;

	private:
	std::string first_n, last_n, nickname, login, postal, email, phone,
	birthday, meal, underwear, secret;
};

class Phonebook
{
	public:
	Phonebook();
	void input_process(int opt);
	void display_phonebook(int index) const;

	private:
	Contact cct[8];
	int index;
};

#endif