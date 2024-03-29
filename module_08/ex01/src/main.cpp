/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 09:41:41 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/29 15:15:03 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

class SequenceGen
{
	private:
		int	_n;
	public:
		SequenceGen(): _n(0) {}
		int	operator()()
		{
			return (_n++);
		}
};

int main()
{
	Span sp = Span(5);
	Span sp0 = Span(10000);
	SequenceGen	seq;

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try
	{
		sp0.addNumbers(10001, seq);
	}
	catch (const std::exception &e)
	{
		std::cerr << "ho ho" << std::endl;
	}
	try
	{
		sp0.addNumbers(9999, seq);
		sp0.addNumber(1);
		std::cout << sp0.shortestSpan() << std::endl;
		std::cout << sp0.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "ho ho" << std::endl;
	}

	return 0;
}