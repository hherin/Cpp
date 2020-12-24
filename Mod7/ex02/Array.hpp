/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 11:31:25 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/24 20:38:55 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template<typename T>
class Array
{
	public:
		Array();
		Array(unsigned int);
		Array(Array const&);
		Array operator=(Array const&);
		T& operator[](unsigned int);
		const T& operator[](unsigned int index) const;
		~Array();
		unsigned int getSize();
		class IndexOutOfLimit;

	private:
		unsigned int _size;
		T *_arr;
};

template<typename T>
class Array<T>::IndexOutOfLimit : public std::exception
{
	public:
		IndexOutOfLimit() {}
		const char *what() const throw (){
			return "OUT OF LIMIT\n";
		}
};

template<typename T>
Array<T>::Array()
	: _size(0), _arr(0)
{
	_arr = new T;
}

template<typename T>
Array<T>::Array(unsigned int sz)
	: _size(sz), _arr(0)
{
	_arr = new T[sz];
}

template<typename T>
unsigned int Array<T>::getSize()
{
	return _size;
}

template<typename T>
Array<T>::Array(Array<T> const &cp)
{
	_arr = new T[cp._size];
	_size = cp._size;
	for (unsigned int i = 0; i < _size; i++)
		_arr[i] = cp._arr[i];
}

template<typename T>
Array<T> Array<T>::operator=(Array<T> const &cp)
{
	if (this == &cp)
		return *this;
	_size = cp._size;
	delete[] _arr;
	_arr = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_arr[i] = cp._arr[i];
	return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index > _size)
		throw IndexOutOfLimit();
	return _arr[index];
}

template<typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index > _size)
		throw IndexOutOfLimit();
	return _arr[index];
}

template<typename T>
Array<T>::~Array()
{
	delete[] _arr;
}

#endif
