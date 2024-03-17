/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:51:22 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/17 18:37:09 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <string>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
	private:
		std::string	_target;
	public:
		//Constructor(s)/Destructor
		PresidentialPardonForm(std::string target);

		//Other method(s)
		void	action(void) const;

		//Operator(s) overload
};

#endif