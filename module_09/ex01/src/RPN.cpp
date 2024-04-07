/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 12:07:26 by gdornic           #+#    #+#             */
/*   Updated: 2024/04/07 13:16:37 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <cstdlib>
#include <new>
#include <iostream>

RPN::RPN(): _tokens(NULL), _operands()
{
}

RPN::RPN(const RPN &other): _tokens(NULL), _operands()
{
	(void)other;
}

RPN	&RPN::operator=(const RPN &other)
{
	if (this != &other)
	{
	}
	return (*this);
}

RPN::~RPN()
{
	if (_tokens == NULL)
		return ;
	delete[] _tokens;
}

RPN::RPN(const char *expression): _tokens(RPN::split(expression)), _operands()
{
}

void	RPN::evaluate()
{
	int	operand1;
	int	operand2;
	int	result;

	if (_tokens == NULL)
	{
		std::cerr << "Error" << std::endl;
		return ;
	}
	for (int i = 0; i < _size; i++)
	{
		if (RPN::isoperator(_tokens[i]))
		{
			if (_operands.size() < 2)
			{
				std::cerr << "Error" << std::endl;
				return ;
			}
			operand2 = _operands.top();
			_operands.pop();
			operand1 = _operands.top();
			_operands.pop();
			result = RPN::calculate(_tokens[i], operand1, operand2);
			_operands.push(result);
		}
		else if (RPN::isnumber(_tokens[i]))
			_operands.push(std::atoi(_tokens[i].c_str()));
		else
		{
			std::cerr << "Error" << std::endl;
			return ;
		}
	}
	if (_operands.size() != 1)
	{
		std::cerr << "Error" << std::endl;
		return ;
	}
	std::cout << _operands.top() << std::endl;
}

bool	RPN::isoperator(const std::string &str) const
{
	std::string	operators("*/+-");

	if (str.size() != 1 || operators.find_first_of(str[0]) == std::string::npos)
		return (0);
	return (1);
}

bool	RPN::isnumber(const std::string &str) const
{
	std::string	numbers("0123456789");

	if (str.size() != 1 || numbers.find_first_of(str[0]) == std::string::npos)
		return (0);
	return (1);
}

int		RPN::calculate(const std::string &op, const int &operand1, const int &operand2) const
{
	if (op == "*")
		return (operand1 * operand2);
	else if (op == "/")
		return (operand1 / operand2);
	else if (op == "+")
		return (operand1 + operand2);
	else if (op == "-")
		return (operand1 - operand2);
	return (0);
}

std::string	*RPN::split(const std::string expression)
{
	int						size;
	std::string::const_iterator	it;

	size = 0;
	it = expression.begin();
	while (it != expression.end())
	{
		if (*it != ' ')
		{
			size++;
			while (it != expression.end() && *it != ' ')
				it++;
		}
		else
			it++;
	}
	_size = size;
	try
	{
		std::string	*result = new std::string[size];

		for (int i = 0; i < size; i++)
			result[i] = "";
		int	i = 0;
		it = expression.begin();
		while (it != expression.end())
		{
			if (*it != ' ')
			{
				while (it != expression.end() && *it != ' ')
				{
					result[i].push_back(*it);
					it++;
				}
				i++;
			}
			else
				it++;
		}
		return (result);
	}
	catch (const std::bad_alloc &e)
	{
		std::cerr << e.what() << std::endl;
		return (NULL);
	}
}