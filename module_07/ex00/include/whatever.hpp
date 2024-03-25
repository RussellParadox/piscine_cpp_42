/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:13:51 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/25 14:15:32 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T &v1, T &v2)
{
	T	tmp;

	tmp = v1;
	v1 = v2;
	v2 = tmp;
}

template <typename T>
T	min(T v1, T v2)
{
	if (v1 < v2)
		return (v1);
	return (v2);
}

template <typename T>
T	max(T v1, T v2)
{
	if (v1 > v2)
		return (v1);
	return (v2);
}

#endif