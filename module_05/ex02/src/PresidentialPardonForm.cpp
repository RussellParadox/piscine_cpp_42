/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:52:32 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/17 16:15:07 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Robotomy Request", 25, 5), _target(target)
{
}

void	PresidentialPardonForm::action(void) const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

