/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:29:07 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/22 15:43:16 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base	*generate(void)
{
	int	random_code;

	std::srand(std::time(NULL));
	random_code = std::rand() / (float)RAND_MAX * 3;
	switch (random_code)
	{
		case 0:
			return (new A);
			break ;
		case 1:
			return (new B);
			break ;
		case 2:
			return (new C);
	}
	return (NULL);
}

void	identify(Base *ptr)
{
	std::cout << "Type: ";
	if (dynamic_cast<A*>(ptr) != NULL)
		std::cout << "A";
	else if (dynamic_cast<B*>(ptr) != NULL)
		std::cout << "B";
	else if (dynamic_cast<C*>(ptr) != NULL)
		std::cout << "C";
	std::cout << std::endl;
}

void	identify(Base &ptr)
{
	std::cout << "Type: ";
	try
	{
		dynamic_cast<A&>(ptr);
		std::cout << "A";
	}
	catch (...)
	{
	}
	try
	{
		dynamic_cast<B&>(ptr);
		std::cout << "B";
	}
	catch (...)
	{
	}
	try
	{
		dynamic_cast<C&>(ptr);
		std::cout << "C";
	}
	catch (...)
	{
	}
	std::cout << std::endl;
}

int	main(void)
{
	Base	*ptr;

	ptr = generate();
	if (ptr != NULL)
	{
		identify(ptr);
		identify(*ptr);
		delete ptr;
	}
}