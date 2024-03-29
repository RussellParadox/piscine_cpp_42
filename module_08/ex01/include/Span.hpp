/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 09:42:10 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/29 15:09:26 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <algorithm>

class Span
{
	private:
		std::vector<int>		_data;
		unsigned int	_size;
		Span	&operator=(const Span &other);
		unsigned int	abs(long int x);
	public:
		Span();
		Span(const Span &other);
		~Span();

		Span(const unsigned int size);
		void	addNumber(const int n);
		unsigned int		shortestSpan();
		unsigned int		longestSpan();
		template <typename F>
		void	addNumbers(const unsigned int size, F generator)
		{
			if (_size + size > _data.size())
				throw std::exception();
			generate(_data.begin() + _size, _data.begin() + _size + size, generator);
			_size = _size + size;
			sort(_data.begin(), _data.begin() + _size);
		}
};

#endif