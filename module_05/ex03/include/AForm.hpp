/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:54:48 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/17 16:19:26 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"
# include <iostream>
# include <string>

class	Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeSign;
		const int			_gradeExec;
		int					initGrade(int grade);
	public:
		//Constructor(s)/Destructor
		AForm();
		AForm(const AForm &other);
		AForm(std::string name, int gradeSign, int gradeExec);
		virtual ~AForm();

		//Getter(s)/Setter(s)
		std::string	getName(void) const;
		bool		getIsSigned(void) const;
		int			getGradeSign(void) const;
		int			getGradeExec(void) const;
		void		beSigned(const Bureaucrat b);

		//Other method(s)
		void			execute(Bureaucrat const &executor) const;
		virtual void	action(void) const = 0;

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
		class	NotSigned: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		//Operator(s) overload
		AForm	&operator=(const AForm &other);
};

//Insertion operator overload
std::ostream	&operator<<(std::ostream &os, const AForm &f);

#endif