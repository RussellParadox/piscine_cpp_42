/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:24:55 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/25 14:59:57 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

template <typename T>
void	double_it(T &it)
{
	it = it + it;
}

template <typename T>
void	print_it(T &it)
{
	std::cout << it << std::endl;
}

int	main(void)
{
	int			int_array[5];
	std::string	str_array[10];

	for (int i = 0; i < 5; i++)
		int_array[i] = i;
	for (int i = 0; i < 10; i++)
		str_array[i] = '0' + i;

	iter<int>(NULL, 5, double_it);
	iter<int>(int_array, 5, NULL);

	std::cout << "before:" << std::endl;
	iter<int>(int_array, 5, print_it<int>);
	iter<std::string>(str_array, 10, print_it<std::string>);

	iter<int>(int_array, 5, double_it<int>);
	iter<std::string>(str_array, 10, double_it<std::string>);

	std::cout << "after:" << std::endl;
	iter<int>(int_array, 5, print_it<int>);
	iter<std::string>(str_array, 10, print_it<std::string>);
	return (0);
}