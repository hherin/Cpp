/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 11:36:53 by heleneherin       #+#    #+#             */
/*   Updated: 2020/12/28 15:05:41 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int i)
	: _index(0), _span(0)
{
	_span.resize(i);
}

Span::Span(Span const &cp)
{
	_index = cp._index;
	_span.resize(cp._span.size());
	for (unsigned int i = 0; i < cp._span.size(); i++)
		_span.push_back(cp._span[i]);
}

Span &Span::operator=(Span const &cp)
{
	if (this == &cp)
		return *this;
	_index = cp._index;
	_span.clear();
	_span.resize(cp._span.size());
	for (unsigned int i = 0; i < cp._span.size(); i++)
		_span.push_back(cp._span[i]);
	return *this;
}

Span::~Span()
{
	_span.clear();
}

void Span::addNumber(int nb)
{
	if (_index == _span.size())
		throw ArrayIsFull();
	_span[_index] = nb;
	_index++;
}

int addCaller()
{
	static int nb = 0;
	return nb++;
}

void Span::multiAddNumber(unsigned int size)
{
	if (_index >= _span.size())
		throw ArrayIsFull();
	if (_index + size > _span.size()){
		size = _span.size() - _index;
		generate_n(_span.begin() + _index, size, addCaller);
		_index += size;
		throw ArrayIsFull();
	}
	else{
		generate_n(_span.begin() + _index, size, addCaller);
		_index += size;
	}
}

int Span::shortestSpan(void)
{
	if (_index < 2)
		throw NoSpanToFind();
	int ret = INT_MAX;
	for (unsigned int i = 0; i < _index; i++){
		if (_span[i] < ret)
			ret = _span[i];
	}
	return (ret);
}

int Span::longestSpan(void)
{
	if (_index < 2)
		throw NoSpanToFind();
	int ret = INT_MIN;
	for (unsigned int i = 0; i < _index; i++){
		if (_span[i] > ret)
			ret = _span[i];
	}
	return (ret);
}