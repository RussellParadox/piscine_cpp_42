/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 12:07:51 by gdornic           #+#    #+#             */
/*   Updated: 2024/04/07 13:13:09 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP
# include <string>
# include <stack>

class	RPN
{
	private:
	 	std::string		*_tokens;
		std::stack<int>	_operands;
		int				_size;

		RPN();
		RPN(const RPN &other);
		RPN	&operator=(const RPN &other);

		bool	isoperator(const std::string &str) const;
		bool	isnumber(const std::string &str) const;
		int		calculate(const std::string &op, const int &operand1, const int &operand2) const;
		std::string	*split(const std::string expression);
	public:
		~RPN();
		RPN(const char *expression);

		void	evaluate();
};

#endif