/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:54:48 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/16 18:15:59 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"
# include <iostream>
# include <string>

class	Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeSign;
		const int			_gradeExec;
		int					initGrade(int grade);
	public:
		//Constructor(s)/Destructor
		Form();
		Form(const Form &other);
		Form(std::string name, int gradeSign, int gradeExec);
		~Form();

		//Getter(s)/Setter(s)
		std::string	getName(void) const;
		bool		getIsSigned(void) const;
		int			getGradeSign(void) const;
		int			getGradeExec(void) const;
		void		beSigned(const Bureaucrat b);

		//Exceptions
		class	GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class	GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		//Operator(s) overload
		Form	&operator=(const Form &other);
};

//Insertion operator overload
std::ostream	&operator<<(std::ostream &os, const Form &f);

#endif