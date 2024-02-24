/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.hpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:48:12 by gdornic           #+#    #+#             */
/*   Updated: 2024/02/23 17:48:17 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HPP
# define FT_HPP
# include <string>

namespace	ft
{
	void	trim_whitespace(std::string &str);
	void	getline(std::string &input, std::string prompt = ">>> ", char delimiter = '\n');
}

#endif