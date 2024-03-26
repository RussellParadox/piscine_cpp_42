/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:18:36 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/26 15:49:58 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

int	main(void)
{
	std::vector<int>			v(1, 2);
	std::list<int>				l(1, 2);
	std::vector<int>::iterator	it_v;
	std::list<int>::iterator	it_l;

	v.push_back(1);
	v.push_back(15);
	v.push_back(11);
	v.push_back(100);
	l.push_back(1);
	l.push_back(15);
	l.push_back(11);
	l.push_back(100);

	if (easyfind<std::vector<int> >(v, 11))
		std::cout << "11 not found in v." << std::endl;
	if (easyfind<std::list<int> >(l, 11))
		std::cout << "11 not found in l" << std::endl;

	if (easyfind<std::vector<int> >(v, 12))
		std::cout << "12 not found in v." << std::endl;
	if (easyfind<std::list<int> >(l, 12))
		std::cout << "12 not found in l." << std::endl;
}