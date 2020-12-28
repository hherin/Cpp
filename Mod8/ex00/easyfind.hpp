/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 11:47:33 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/25 18:33:00 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <exception>

class NotIntContainer : public std::exception
{
	public:
		NotIntContainer(){}
		const char *what() const throw(){
			return "Can't find this element in container";
		}
};

template <typename C>
int easyfind(C &obj, int occ)
{
	typename C::iterator it = find(obj.begin(), obj.end(), occ);
	if (it == obj.end())
		throw NotIntContainer();
	else
		return *it;
}

#endif