/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:01:10 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/17 18:46:37 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &other)
{
	(void)other;
}

Intern	&Intern::operator=(const Intern &other)
{
	if (this != &other)
	{
	}
	return (*this);
}

Intern::~Intern()
{
}

Form	*Intern::createShubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::createRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::createPresidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	std::string			forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form*				(Intern::*formCreate[])(std::string) = {&Intern::createShubbery, &Intern::createRobotomy, &Intern::createPresidential};

	std::cout << "Intern creates " << name << std::endl;
	for (int i = 0; i < 3; i++)
	{
		if (forms[i] == name)
		{
			return ((this->*formCreate[i])(target));
		}
	}
	std::cout << name << " not found in protocols." << std::endl;
	return (NULL);
}