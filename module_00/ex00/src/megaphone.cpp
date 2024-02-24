/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 11:46:10 by gdornic           #+#    #+#             */
/*   Updated: 2024/02/19 14:30:15 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string	string_upper(char *s)
{
	std::string	str(s);

	for (std::string::iterator i = str.begin(); i != str.end(); i++)
		*i = std::toupper(*i);
	return (str);
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
		for (int i = 1; argv[i] != NULL; i++)
			std::cout << string_upper(argv[i]);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}