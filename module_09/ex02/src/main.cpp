/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 15:29:18 by gdornic           #+#    #+#             */
/*   Updated: 2024/04/08 14:24:19 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <exception>

int	main(int argc, const char *argv[])
{
	if (argc < 2)
	{
		std::cerr << "Error: nothing to sort." << std::endl;
		return (0);
	}
	try
	{
		PmergeMe	data(argv);
		data.printLog();
	}
	catch (const std::exception &e)
	{
	}
	return (0);
}