/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:16:52 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/07 11:55:59 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main( void )
{
	Point	a(0, 0);
	Point	b(0, 1);
	Point	c(1, 0);
	Point	p1(0.2, 0.2);
	Point	p2(0.5, 200);
	Point	p3(-1, -1);
	Point	p4(0.1, 0.2);

	if (bsp(a, b, c, p1))
		std::cout << "p1 belong to abc surface." << std::endl;
	else
		std::cout << "p1 dooes not belong to abc surface." << std::endl;
	if (bsp(a, b, c, p2))
		std::cout << "p2 belong to abc surface." << std::endl;
	else
		std::cout << "p2 dooes not belong to abc surface." << std::endl;
	if (bsp(a, b, c, p3))
		std::cout << "p2 belong to abc surface." << std::endl;
	else
		std::cout << "p2 dooes not belong to abc surface." << std::endl;
	if (bsp(a, b, c, p4))
		std::cout << "p2 belong to abc surface." << std::endl;
	else
		std::cout << "p2 dooes not belong to abc surface." << std::endl;
	return (0);
}