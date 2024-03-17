/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:55:12 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/17 16:21:47 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _name("No name"), _isSigned(false), _gradeSign(150), _gradeExec(150)
{
}

AForm::AForm(const AForm &other): _name(other._name), _isSigned(false), _gradeSign(other._gradeSign), _gradeExec(other._gradeExec)
{
}

AForm	&AForm::operator=(const AForm &other)
{
	if (this != &other)
	{
		_isSigned = other._isSigned;
	}
	return (*this);
}

AForm::~AForm()
{
}

int	AForm::initGrade(int grade)
{
	if (grade > 150 || grade < 1)
		return (150);
	return (grade);
}

AForm::AForm(std::string name, int gradeSign, int gradeExec): _name(name), _isSigned(false), _gradeSign(initGrade(gradeSign)), _gradeExec(initGrade(gradeExec))
{
	try
	{
		if (gradeExec > 150)
			throw AForm::GradeTooLowException();
		if (gradeExec < 1)
			throw AForm::GradeTooHighException();
	}
	catch (const AForm::GradeTooHighException &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	catch (const AForm::GradeTooLowException &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	try
	{
		if (gradeSign > 150)
			throw AForm::GradeTooLowException();
		if (gradeSign < 1)
			throw AForm::GradeTooHighException();
	}
	catch (const AForm::GradeTooHighException &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	catch (const AForm::GradeTooLowException &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

std::string	AForm::getName(void) const
{
	return (_name);
}

bool		AForm::getIsSigned(void) const
{
	return (_isSigned);
}

int			AForm::getGradeSign(void) const
{
	return (_gradeSign);
}

int			AForm::getGradeExec(void) const
{
	return (_gradeExec);
}

void		AForm::beSigned(const Bureaucrat b)
{
	if (b.getGrade() > _gradeSign)
		throw AForm::GradeTooLowException();
	else
		_isSigned = true;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("grade too high.");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("grade too low.");
}

const char *AForm::NotSigned::what() const throw()
{
	return ("document need to be signed.");
}

std::ostream	&operator<<(std::ostream &os, const AForm &f)
{
	std::string	signed_sentence;

	if (f.getIsSigned())
		signed_sentence = "is signed";
	else
		signed_sentence = "isn't signed";
	os << f.getName() << ", form that need a " << f.getGradeSign() << " grade to be signed and a " << f.getGradeExec() << " grade to be executed.\nActually the document " << signed_sentence << ".";
	return (os);
}

void	AForm::execute(Bureaucrat const &executor) const
{
	if (_gradeExec <= executor.getGrade())
		throw AForm::GradeTooLowException();
	if (!_isSigned)
		throw AForm::NotSigned();
	this->action();
}