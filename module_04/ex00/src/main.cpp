/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:52:55 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/12 11:11:50 by gdornic          ###   ########.fr       */
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
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal*	metawrong = new WrongAnimal();
	const WrongAnimal*	iwrong = new WrongCat();
	const WrongCat*		wrongcat = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << iwrong->getType() << " " << std::endl;
	iwrong->makeSound();
	metawrong->makeSound();
	wrongcat->makeSound();

	delete meta;
	delete j;
	delete i;
	delete metawrong;
	delete iwrong;
	delete wrongcat;
	return 0;
}