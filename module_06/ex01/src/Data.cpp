/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:11:57 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/22 13:17:53 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(): _message("These violent delights have violent ends.")
{
}

Data::Data(const Data &other): _message(other._message)
{
}

Data	&Data::operator=(const Data &other)
{
	if (this != &other)
	{
		_message = other._message;
	}
	return (*this);
}

Data::~Data()
{
}

std::string	Data::getMessage(void)
{
	return (_message);
}
