/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:52:55 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/12 15:03:27 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	Animal			*spa[4];

	spa[0] = new Dog();
	spa[1] = new Dog();
	spa[2] = new Cat();
	spa[3] = new Cat();

	delete j;//should not create a leak
	delete i;

	for (int k = 0; k < 4; k++)
		delete spa[k];

	return 0;
}