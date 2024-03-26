/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:18:06 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/26 15:49:27 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <iostream>

template <typename T>
bool	easyfind(T container, int n)
{
	typename T::iterator	it;

	it = std::find(container.begin(), container.end(), n);
	if (it != container.end())
	{
		std::cout << "Found as the " << std::distance(container.begin(), it) << "th element." << std::endl;
		return (0);
	}
	return (1);
}

#endif