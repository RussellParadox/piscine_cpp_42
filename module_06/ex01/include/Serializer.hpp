/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:06:06 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/22 13:16:19 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include "Data.hpp"

class Serializer
{
	private:
		//Constructor(s)
		Serializer();
		Serializer(const Serializer &other);
	public:
		//Constructor(s)/Destructor
		~Serializer();

		//Operator(s) overload
		Serializer	&operator=(const Serializer &other);

		//Other method(s)
		static uintptr_t	serialize(Data *ptr);
		static Data			*deserialize(uintptr_t raw);
};

#endif