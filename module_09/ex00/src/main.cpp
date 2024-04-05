/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 18:34:34 by gdornic           #+#    #+#             */
/*   Updated: 2024/04/05 10:48:55 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <exception>
#include <iostream>

int	main(int argc, char *argv[])
{
	BitcoinExchange	table;

	if (argc < 2)
	{
		std::cerr << "Error: could not open file." << std::endl;
		return (0);
	}
	else if (argc > 2)
	{
		std::cerr << "Error: too much arguments." << std::endl;
		return (0);
	}
	try
	{
		table.load_rates("./data.csv");
		table.print(argv[1]);
	}
	catch (const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}