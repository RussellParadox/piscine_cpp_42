/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:48:53 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/02 16:21:49 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	std::string	arg;
	int			arg_code;
	Harl		harl;

	if (argc != 2)
	{
		std::cerr << "Wrong argument quantity." << std::endl;
		return (1);
	}
	arg.assign(argv[1]);
	arg_code = (arg == "DEBUG") * 1 + (arg == "INFO") * 2 + (arg == "WARNING") * 3 + (arg == "ERROR") * 4;
	switch (arg_code)
	{
		case 4:
			std::cerr << "[ ERROR ]" << std::endl;
			harl.complain("ERROR");
			std::cerr << std::endl;
			break ;
		case 3:
			std::cerr << "[ WARNING ]" << std::endl;
			harl.complain("WARNING");
			std::cerr << std::endl;
			std::cerr << "[ ERROR ]" << std::endl;
			harl.complain("ERROR");
			std::cerr << std::endl;
			break ;
		case 2:
			std::cerr << "[ INFO ]" << std::endl;
			harl.complain("INFO");
			std::cerr << std::endl;
			std::cerr << "[ WARNING ]" << std::endl;
			harl.complain("WARNING");
			std::cerr << std::endl;
			std::cerr << "[ ERROR ]" << std::endl;
			harl.complain("ERROR");
			std::cerr << std::endl;
			break ;
		case 1:
			std::cerr << "[ DEBUG ]" << std::endl;
			harl.complain("DEBUG");
			std::cerr << std::endl;
			std::cerr << "[ INFO ]" << std::endl;
			harl.complain("INFO");
			std::cerr << std::endl;
			std::cerr << "[ WARNING ]" << std::endl;
			harl.complain("WARNING");
			std::cerr << std::endl;
			std::cerr << "[ ERROR ]" << std::endl;
			harl.complain("ERROR");
			std::cerr << std::endl;
			break ;
		default:
			std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
}