/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 15:13:49 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/29 16:51:10 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iterator>
# include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	public :
		MutantStack() : std::stack<T>(){}
		virtual ~MutantStack(){}
		MutantStack(MutantStack const&cp) : std::stack<T>(cp) { *this = cp; }
		MutantStack& operator=(MutantStack const &rhs)
		{
			if (this != &rhs)
				std::stack<T>::operator=(rhs);
			return *this;
		}
		typedef typename MutantStack<T>::container_type::iterator iterator;
		typedef typename MutantStack<T>::container_type::const_iterator const_iterator;
        typedef typename MutantStack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename MutantStack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		iterator begin() { return MutantStack<T>::c.begin(); }
		iterator end() { return MutantStack<T>::c.end(); }
		const_iterator begin() const { return MutantStack<T>::c.begin(); }
		const_iterator end() const { return MutantStack<T>::c.end(); }
		reverse_iterator rbegin() { return MutantStack<T>::c.rbegin(); }
		reverse_iterator rend() { return MutantStack<T>::c.rend(); }
		const_reverse_iterator rbegin() const { return MutantStack<T>::c.rbegin(); }
		const_reverse_iterator rend() const { return MutantStack<T>::c.rend(); }
};



#endif
