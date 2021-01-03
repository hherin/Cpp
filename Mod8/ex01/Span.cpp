/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heleneherin <heleneherin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 11:36:53 by heleneherin       #+#    #+#             */
/*   Updated: 2021/01/03 15:43:17 by heleneherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int i)
	: _initSize(i), _span(0)
{}

Span::Span(Span const &cp)
{
	_initSize = cp._initSize;
	for (unsigned int i = 0; i < cp._span.size(); i++)
		_span.push_back(cp._span[i]);
}

Span &Span::operator=(Span const &cp)
{
	if (this == &cp)
		return *this;
	_initSize = cp._initSize;
	_span.clear();
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
	if (_initSize == _span.size())
		throw ArrayIsFull();
	_span.push_back(nb);
	std::sort(_span.begin(), _span.end());
}

int addCaller()
{
	static int nb = 0;
	return nb++;
}

void Span::multiAddNumber(unsigned int addSize)
{
	unsigned int oldSize = _span.size();
	bool except = false;

	if (_initSize <= _span.size())
		throw ArrayIsFull();
	if (oldSize + addSize > _initSize && (except = true))
		addSize = _initSize - oldSize;
	_span.resize(addSize + oldSize);
	generate_n(_span.begin() + oldSize, addSize, addCaller);
	if (except)
		throw ArrayIsFull();
}

int Span::shortestSpan(void)
{
	if (_span.size() < 2)
		throw NoSpanToFind();
	int spanRet = INT_MAX;
	for (unsigned int i = 1; i < _span.size(); i++){
		if (spanRet > _span[i] - _span[i - 1]){
			spanRet = _span[i] - _span[i - 1];
		}
	}
	return spanRet;
}

int Span::longestSpan(void)
{
	if (_span.size() < 2)
		throw NoSpanToFind();
	return (_span[_span.size() - 1] - _span[0]);
}