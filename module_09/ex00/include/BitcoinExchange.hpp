/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 18:35:23 by gdornic           #+#    #+#             */
/*   Updated: 2024/04/05 11:23:29 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <map>
# include <string>
# include <exception>

class	BitcoinExchange
{
	private:
		std::map<std::string, double>	_rates;

		void	printDateValue(const std::string date, const double value) const;
		bool	checkKey(const std::string key) const;
		bool	checkValue(const std::string value) const;
		bool	checkRate(const std::string rate) const;
		bool	isnumber(const std::string s) const;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange	&operator=(const BitcoinExchange &other);
		~BitcoinExchange();

		void	load_rates(const char *filename);
		void	print(const char *filename) const;

		class	OpenException: public std::exception
		{
			private:
				std::string	_filename;
			public:
				OpenException(const std::string filename);
				virtual ~OpenException() throw() {}
				virtual const char *what() const throw();
		};
		class	KeyException: public std::exception
		{
			private:
				std::string	_origin;
				std::string	_key;
			public:
				KeyException(const std::string origin, const std::string key);
				virtual ~KeyException() throw() {}
				virtual const char *what() const throw();
		};
		class	ValueException: public std::exception
		{
			private:
				std::string	_origin;
				std::string	_value;
			public:
				ValueException(const std::string origin, const std::string value);
				virtual ~ValueException() throw() {}
				virtual const char *what() const throw();
		};
		class	RateException: public std::exception
		{
			private:
				std::string	_origin;
				std::string	_rate;
			public:
				RateException(const std::string origin, const std::string rate);
				virtual ~RateException() throw() {}
				virtual const char *what() const throw();
		};
};

#endif