/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:29:27 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/17 14:32:47 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>
# include <stdexcept>
# include "AForm.hpp"

class	AForm;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
	 	//Constructor(s)/Destructor
		Bureaucrat();
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat	&operator=(const Bureaucrat &other);
		~Bureaucrat();
		Bureaucrat(std::string name, int grade);

		//Getters/Setters
		std::string	getName(void) const;
		int			getGrade(void) const;
		void		gradeIncrement(void);
		void		gradeDecrement(void);

		//Other methods
		void		signForm(AForm &f);
		void		executeForm(AForm const &form);

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
};

//Insertion operator overload
std::ostream	&operator<<(std::ostream &os, const Bureaucrat &b);

#endif