/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:01:10 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/21 10:58:40 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	forms[0] = "shrubbery creation";
	forms[1] = "robotomy request";
	forms[2] = "presidential pardon";
	formCreate[0] = &Intern::createShubbery;
	formCreate[1] = &Intern::createRobotomy;
	formCreate[2] = &Intern::createPresidential;
}

Intern::Intern(const Intern &other)
{
	(void)other;
	forms[0] = "shrubbery creation";
	forms[1] = "robotomy request";
	forms[2] = "presidential pardon";
	formCreate[0] = &Intern::createShubbery;
	formCreate[1] = &Intern::createRobotomy;
	formCreate[2] = &Intern::createPresidential;
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