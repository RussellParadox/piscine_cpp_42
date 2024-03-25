/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:09:36 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/25 16:20:59 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <new>
# include <exception>

template <typename T>
class	Array
{
	private:
		T				*_array;
		unsigned int	_size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &other);
		~Array();

		Array<T>	&operator=(const Array &other);
		T	&operator[](int index);

		unsigned int	size() const;
};

template <typename T>
Array<T>::Array(): _array(new T[0]), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n): _array(new T[n]), _size(n)
{
	if (_array == 0)
		return ;
	for (unsigned int i = 0; i < n; i++)
		_array[i] = T();
}

template <typename T>
Array<T>::Array(const Array &other): _array(new T[other._size]), _size(other._size)
{
	if (_array == 0)
		return ;
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = other._array[i];
}

template <typename T>
Array<T>::~Array()
{
	if (_array != 0)
		delete[] _array;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		if (_array != 0)
			delete[] _array;
		_array = new T[other._size];
		_size = other._size;
		if (_array != 0)
		{
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = other._array[i];
		}
	}
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](int index)
{
	if (index < 0 || static_cast<unsigned int>(index) >= _size)
		throw std::exception();
	return (_array[index]);
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (_size);
}

#endif