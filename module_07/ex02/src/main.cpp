/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:08:14 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/25 16:23:17 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int	main(void)
{
	Array<int>	int_array;
	Array<int>	int_array2(7);

	std::cout << "Empty array of size: " << int_array.size() << std::endl;
	std::cout << "Non-empty array of size: " << int_array2.size() << std::endl;
	std::cout << "Initialized with:" << std::endl;
	for (unsigned int i = 0; i < int_array2.size(); i++)
		std::cout << "\t" << int_array2[i] << std::endl;
	
	int_array = int_array2;
	std::cout << "Now the previous empty array has a size of: " << int_array.size() << std::endl;

	int_array[0] = 2;
	std::cout << "First array: " << std::endl;
	for (unsigned int i = 0; i < int_array.size(); i++)
		std::cout << "\t" << int_array[i] << std::endl;
	std::cout << "Second array: " << std::endl;
	for (unsigned int i = 0; i < int_array2.size(); i++)
		std::cout << "\t" << int_array2[i] << std::endl;

	try
	{
		int_array[-1] = 3;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	try
	{
		int_array[120] = 3;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return (0);
}