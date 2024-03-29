/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 09:41:25 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/29 15:09:04 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span(): _data(0), _size(0)
{
}

Span::Span(const Span &other): _data(other._data), _size(other._size)
{
}

Span	&Span::operator=(const Span &other)
{
	if (this != &other)
	{
	}
	return (*this);
}

Span::~Span()
{
}

unsigned int	Span::abs(long int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

Span::Span(const unsigned int size): _data(size), _size(0)
{
}

void	Span::addNumber(const int n)
{
	if (_data.size() == _size)
		throw std::exception();
	_data[_size] = n;
	_size++;
	sort(_data.begin(), _data.begin() + _size);
}

unsigned int	Span::shortestSpan()
{
	unsigned int	shortest_span;
	unsigned int	span;

	if (_size <= 1)
		throw std::exception();
	shortest_span = _data[1] - _data[0];
	for (unsigned int i = 1; i < _size; i++)
	{
		span = _data[i] - _data[i - 1];
		if (span < shortest_span)
			shortest_span = span;
	}
	return (shortest_span);
}

unsigned int	Span::longestSpan()
{
	if (_size <= 1)
		throw std::exception();
	return (Span::abs(_data[_size - 1] - _data[0]));
}

// template <typename F>
// void	Span::addNumbers(const unsigned int size, F generator)
// {
	// if (_size + size > _data.size())
		// throw std::exception();
	// generate(_data.begin() + _size, _data.begin() + _size + size, generator);
	// _size = _size + size;
	// sort(_data.begin(), _data.begin() + _size);
// }