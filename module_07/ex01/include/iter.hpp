/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:25:48 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/25 14:52:20 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void	iter(T *addr, unsigned int len, void (*f)(T&))
{
	if (addr == 0 || f == 0)
		return ;
	for (unsigned int i = 0; i < len; i++)
		(*f)(addr[i]);
}

#endif