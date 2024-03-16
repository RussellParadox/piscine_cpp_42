/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:55:12 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/16 18:26:47 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("No name"), _isSigned(false), _gradeSign(150), _gradeExec(150)
{
}

Form::Form(const Form &other): _name(other._name), _isSigned(false), _gradeSign(other._gradeSign), _gradeExec(other._gradeExec)
{
}

Form	&Form::operator=(const Form &other)
{
	if (this != &other)
	{
		_isSigned = other._isSigned;
	}
	return (*this);
}

Form::~Form()
{
}

int	Form::initGrade(int grade)
{
	if (grade > 150 || grade < 1)
		return (150);
	return (grade);
}

Form::Form(std::string name, int gradeSign, int gradeExec): _name(name), _isSigned(false), _gradeSign(initGrade(gradeSign)), _gradeExec(initGrade(gradeExec))
{
	try
	{
		if (gradeExec > 150)
			throw Form::GradeTooLowException();
		if (gradeExec < 1)
			throw Form::GradeTooHighException();
	}
	catch (const Form::GradeTooHighException &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	catch (const Form::GradeTooLowException &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	try
	{
		if (gradeSign > 150)
			throw Form::GradeTooLowException();
		if (gradeSign < 1)
			throw Form::GradeTooHighException();
	}
	catch (const Form::GradeTooHighException &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	catch (const Form::GradeTooLowException &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

std::string	Form::getName(void) const
{
	return (_name);
}

bool		Form::getIsSigned(void) const
{
	return (_isSigned);
}

int			Form::getGradeSign(void) const
{
	return (_gradeSign);
}

int			Form::getGradeExec(void) const
{
	return (_gradeExec);
}

void		Form::beSigned(const Bureaucrat b)
{
	if (b.getGrade() > _gradeSign)
		throw Form::GradeTooLowException();
	else
		_isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("grade too high.");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("grade too low.");
}

std::ostream	&operator<<(std::ostream &os, const Form &f)
{
	std::string	signed_sentence;

	if (f.getIsSigned())
		signed_sentence = "is signed";
	else
		signed_sentence = "isn't signed";
	os << f.getName() << ", form that need a " << f.getGradeSign() << " grade to be signed and a " << f.getGradeExec() << " grade to be executed.\nActually the document " << signed_sentence << ".";
	return (os);
}