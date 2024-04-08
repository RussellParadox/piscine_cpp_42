/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 16:52:11 by gdornic           #+#    #+#             */
/*   Updated: 2024/04/08 14:39:03 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <vector>
# include <list>

class	PmergeMe
{
	private:
	 	std::list<int>		_unsorted;
		std::list<int>		_list_sorted;
		std::vector<int>	_vect_sorted;
		std::list<int>		_list;
		std::vector<int>	_vect;
		double				_list_time;
		double				_vect_time;
		int					_size;

		PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe	&operator=(const PmergeMe &other);

		template <typename T>
		T		mergeInsertionSort(T ctn, long unsigned int k);
		template <typename T>
		T		sub(T ctn, int start, int end);
		template <typename T>
		T		merge(T left, T right);
		template <typename T>
		T		insertionSort(T ctn);
	public:
		~PmergeMe();
		PmergeMe(const char *argv[]);

		void	printLog();
};

template <typename T>
T		PmergeMe::mergeInsertionSort(T ctn, long unsigned int k)
{
	int	mid;
	T	left;
	T	right;

	if (ctn.size() <= k)
		return (PmergeMe::insertionSort(ctn));
	else
	{
		mid = ctn.size() / 2;
		left = PmergeMe::mergeInsertionSort(PmergeMe::sub(ctn, 0, mid), k);
		right = PmergeMe::mergeInsertionSort(PmergeMe::sub(ctn, mid, ctn.size()), k);
		return (PmergeMe::merge(left, right));
	}
}

template <typename T>
T		PmergeMe::sub(T ctn, int start, int end)
{
	T				sub;
	typename T::iterator	it;

	if (start >= end)
		return (sub);
	it = ctn.begin();
	for (int i = 0; i < start && it != ctn.end(); i++)
		it++;
	for (int i = start; i < end && it != ctn.end(); i++)
	{
		sub.push_back(*it);
		it++;
	}
	return (sub);
}

template <typename T>
T		PmergeMe::merge(T left, T right)
{
	T						merged;
	typename T::iterator	itLeft;
	typename T::iterator	itRight;

	itLeft = left.begin();
	itRight = right.begin();
	while (itLeft != left.end() && itRight != right.end())
	{
		if (*itLeft < *itRight)
		{
			merged.push_back(*itLeft);
			itLeft++;
		}
		else
		{
			merged.push_back(*itRight);
			itRight++;
		}
	}
	while (itLeft != left.end())
	{
		merged.push_back(*itLeft);
		itLeft++;
	}
	while (itRight != right.end())
	{
		merged.push_back(*itRight);
		itRight++;
	}
	return (merged);
}

template <typename T>
T		PmergeMe::insertionSort(T ctn)
{
	T				sorted;
	typename T::iterator	itSorted;
	typename T::iterator	itctn;

	itctn = ctn.begin();
	while (itctn != ctn.end())
	{
		itSorted = sorted.begin();
		while (itSorted != sorted.end() && *itctn > *itSorted)
			itSorted++;
		sorted.insert(itSorted, *itctn);
		itctn++;
	}
	return (sorted);
}

#endif