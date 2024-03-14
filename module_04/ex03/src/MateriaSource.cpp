/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:23:40 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/14 17:06:14 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_knowledge[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other._knowledge[i] != NULL)
			_knowledge[i] = other._knowledge[i]->clone();
		else
			_knowledge[i] = NULL;
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_knowledge[i] != NULL)
				delete _knowledge[i];
			if (other._knowledge[i] != NULL)
				_knowledge[i] = other._knowledge[i]->clone();
			else
				_knowledge[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_knowledge[i] != NULL)
			delete _knowledge[i];
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	int	i;

	i = 0;
	while (i < 4 && _knowledge[i] != NULL)
		i++;
	if (i < 3)
		_knowledge[i] = m;
	else
		std::cout << "* Materia Source: inventory full *" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (_knowledge[i] != NULL && _knowledge[i]->getType() == type)
			return (_knowledge[i]->clone());
		i++;
	}
	return (NULL);
}

std::string const &MateriaSource::getName() const
{
	static const std::string	_name = "Source";
	return (_name);
}