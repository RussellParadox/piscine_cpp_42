/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:00:34 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/21 10:49:13 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <string>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		std::string			forms[3];
		Form*				(Intern::*formCreate[3])(std::string);
	public:
		//Constructor(s)/Destructor
		Intern();
		Intern(const Intern &other);
		~Intern();

		//Other method(s)
		Form	*makeForm(std::string name, std::string target);
		Form	*createShubbery(std::string target);
		Form	*createRobotomy(std::string target);
		Form	*createPresidential(std::string target);

		//Operator(s) overload
		Intern	&operator=(const Intern &other);
};

#endif