/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:29:56 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/15 17:17:00 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(): _name("No name"), _grade(150)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &other): _name(other._name), _grade(other._grade)
{
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		_grade = other._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(150)
{
	try
	{
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		_grade = grade;
	}
	catch (const Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("grade too high.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("grade too low.");
}

std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

int			Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void		Bureaucrat::gradeIncrement(void)
{
	try
	{
		if (_grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		_grade--;
	}
	catch (const Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

void		Bureaucrat::gradeDecrement(void)
{
	try
	{
		if (_grade + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		_grade++;
	}
	catch (const Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return (os);
}