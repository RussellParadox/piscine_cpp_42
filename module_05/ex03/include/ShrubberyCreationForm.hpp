/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:49:59 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/17 18:37:32 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <string>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private:
		std::string	_target;
	public:
		//Constructor(s)/Destructor
		ShrubberyCreationForm(std::string target);

		//Other method(s)
		void	action(void) const;

		//Operator(s) overload
};

#endif