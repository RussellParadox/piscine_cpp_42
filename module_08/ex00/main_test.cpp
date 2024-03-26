/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:28:32 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/26 14:10:37 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <map>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <list>

class	Fill
{
	private:
		int	_value;
	public:
		Fill(int value): _value(value) {}
		int	operator()()
		{
			_value++;
			return (_value);
		}
};

int	main(void)
{
	std::list<int>	u(100, 0);
	Fill				fill(0);

	generate(u.begin(), u.end(), fill);
	for (std::list<int>::iterator it = u.begin(); it != u.end(); it++)
		std::cout << *it << std::endl;
}