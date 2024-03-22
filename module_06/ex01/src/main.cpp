/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:53:17 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/22 13:13:27 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>

int	main(void)
{
	Data		data;
	Data		*data_ptr;
	uintptr_t	ptr;

	ptr = Serializer::serialize(&data);
	data_ptr = Serializer::deserialize(ptr);
	if (data_ptr == &data)
	{
		std::cout << "Success" << std::endl;
		std::cout << data_ptr->getMessage() << std::endl;
	}
	else
		std::cout << "Failure" << std::endl;
	return (0);
}