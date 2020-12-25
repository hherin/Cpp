/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 11:31:25 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/25 01:21:54 by user42           ###   ########.fr       */
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
		// T operator=(T const &cp);
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
	// _arr[0] = 0;
}

template<typename T>
Array<T>::Array(unsigned int sz)
	: _size(sz), _arr(0)
{
	_arr = new T[sz];
	// for (unsigned int i = 0; i < _size; i++)
	// 	_arr[i] = 0;
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
	if (_size)
		delete[] _arr;
	else
		delete _arr;
	_size = cp._size;
	_arr = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_arr[i] = cp._arr[i];
	return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw IndexOutOfLimit();
	return _arr[index];
}

template<typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw IndexOutOfLimit();
	return _arr[index];
}

template<typename T>
Array<T>::~Array()
{
	if (_size)
		delete[] _arr;
	else
		delete _arr;
}

#endif
