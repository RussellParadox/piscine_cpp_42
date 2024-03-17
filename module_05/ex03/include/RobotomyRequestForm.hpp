/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:50:38 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/17 18:37:19 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <string>
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
	private:
		std::string	_target;
	public:
		//Constructor(s)/Destructor
		RobotomyRequestForm(std::string target);

		//Other method(s)
		void	action(void) const;

		//Operator(s) overload
};

#endif