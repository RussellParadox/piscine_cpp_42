/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 16:51:53 by gdornic           #+#    #+#             */
/*   Updated: 2024/04/08 14:42:22 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <exception>

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
	(void)other;
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &other)
{
	if (this != &other)
	{
	}
	return (*this);
}

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(const char *argv[]): _unsorted(), _list_sorted(), _vect_sorted(), _list(), _vect(), _list_time(0), _vect_time(0), _size(0)
{
	int	n;

	for (int i = 1; argv[i] != NULL; i++)
	{
		n = std::atoi(argv[i]);
		if (n < 0)
		{
			std::cerr << "Error: arguments must be positive(s) integer(s)." << std::endl;
			throw	std::exception();
		}
		_unsorted.push_back(n);
		_vect.push_back(n);
		_list.push_back(n);
		_size++;
	}
}

void	PmergeMe::printLog()
{
	clock_t	start;
	clock_t	end;

	std::cout << "Before: ";
	for (std::list<int>::iterator it = _unsorted.begin(); it != _unsorted.end(); it++)
		std::cout << " " << *it;
	std::cout << std::endl;

	
	start = clock();
	_list_sorted = mergeInsertionSort(_list, 2);
	end = clock();
	_list_time = ((double)(end - start) / CLOCKS_PER_SEC) * 1000000;
	start = clock();
	_vect_sorted = mergeInsertionSort(_vect, 2);
	end = clock();
	_vect_time = ((double)(end - start) / CLOCKS_PER_SEC) * 1000000;

	std::cout << "After:  ";
	srand(time(NULL));
	if (rand() % 2)
	{
		for (std::list<int>::iterator it = _list_sorted.begin(); it != _list_sorted.end(); it++)
			std::cout << " " << *it;
	}
	else
	{
		for (std::vector<int>::iterator it = _vect_sorted.begin(); it != _vect_sorted.end(); it++)
			std::cout << " " << *it;
	}
	std::cout << std::endl;

	std::cout << "Time to process a range of " << _size << " elements with std::list : " << _list_time << " us" << std::endl;
	std::cout << "Time to process a range of " << _size << " elements with std::vector : " << _vect_time << " us" << std::endl;
}