/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:04:19 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/22 13:17:06 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP
# include <string>

typedef	unsigned int * uintptr_t;

class Data
{
	private:
		std::string	_message;
	public:
		//Constructor(s)/Destructor
		Data();
		Data(const Data &other);
		~Data();

		//Getter
		std::string	getMessage(void);

		//Operator(s) overload
		Data	&operator=(const Data &other);
};

#endif