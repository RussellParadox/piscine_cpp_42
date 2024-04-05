/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 18:34:56 by gdornic           #+#    #+#             */
/*   Updated: 2024/04/05 11:41:34 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <string>

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other): _rates(other._rates)
{
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
	{
		_rates = other._rates;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
}

void	BitcoinExchange::load_rates(const char *filename)
{
	std::fstream	file;
	std::string		line;
	size_t			sep_pos;
	std::string		key;
	std::string		value;

	file.open(filename, std::ios::in);
	if (!file)
		throw BitcoinExchange::OpenException(filename);
	getline(file, line);
	while (getline(file, line))
	{
		sep_pos = line.find(',');
		key = line.substr(0, sep_pos);
		value = line.substr(sep_pos + 1, line.size());
		// std::cout << "KEY: '" << key << "'" << std::endl;
		// std::cout << "VALUE: '" << value << "'" << std::endl;
		if (BitcoinExchange::checkKey(key))
		{
			file.close();
			throw BitcoinExchange::KeyException("database", key);
		}
		if (BitcoinExchange::checkRate(value))
		{
			file.close();
			std::cout << "VALUE: '" << value << "'" << std::endl;
			throw BitcoinExchange::RateException("database", value);
		}
		_rates[key] = std::atof(value.c_str());
	}
	file.close();
}

void	BitcoinExchange::print(const char *filename) const
{
	std::fstream	file;
	std::string		line;
	size_t			sep_pos;
	std::string		key;
	std::string		value;

	file.open(filename, std::ios::in);
	if (!file)
		throw BitcoinExchange::OpenException(filename);
	getline(file, line);
	while (getline(file, line))
	{
		sep_pos = line.find(" | ");
		key = line.substr(0, sep_pos);
		value = line.substr(sep_pos + 3, line.size());
		// std::cout << "KEY: '" << key << "'" << std::endl;
		// std::cout << "VALUE: '" << value << "'" << std::endl;
		try 
		{
			if (BitcoinExchange::checkKey(key))
				throw BitcoinExchange::KeyException("input", key);
			if (BitcoinExchange::checkValue(value))
				throw BitcoinExchange::ValueException("input", value);
			BitcoinExchange::printDateValue(key, std::atof(value.c_str()));
		}
		catch (const std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	file.close();
}

BitcoinExchange::OpenException::OpenException(const std::string filename): _filename(filename)
{
}

const char *BitcoinExchange::OpenException::what() const throw()
{
	return (("could not open file: " + _filename).c_str());
}

BitcoinExchange::KeyException::KeyException(const std::string origin, const std::string key): _origin(origin), _key(key)
{
}

const char *BitcoinExchange::KeyException::what() const throw()
{
	static std::string	msg;

	msg = ("bad " + _origin + " => " + _key);
	return (msg.c_str());
}

BitcoinExchange::ValueException::ValueException(const std::string origin, const std::string value): _origin(origin), _value(value)
{
}

const char *BitcoinExchange::ValueException::what() const throw()
{
	double				v;
	static std::string	msg("");

	if (_origin == "database")
		msg += "database: ";
	v = std::atof(_value.c_str());
	if (v < 0)
		msg += "not a positive number.";
	else if (v > 1000)
		msg += "too large a number.";
	else
		msg += "unknown value.";
	return (msg.c_str());
}

BitcoinExchange::RateException::RateException(const std::string origin, const std::string rate): _origin(origin), _rate(rate)
{
}

const char *BitcoinExchange::RateException::what() const throw()
{
	double				v;
	static std::string	msg("");

	if (_origin == "database")
		msg += "database: ";
	v = std::atof(_rate.c_str());
	if (v < 0)
		msg += "not a positive number.";
	else
		msg += "unknown rate.";
	return (msg.c_str());
}

void	BitcoinExchange::printDateValue(const std::string date, const double value) const
{
	std::map<std::string, double>::const_iterator	it;

	it = _rates.begin();
	while (it != _rates.end() && date.compare(it->first) > 0)
		it++;
	if (it == _rates.end())
		it--;
	std::cout << date + " => " << value << " = " << value * (it->second) << std::endl;
}

bool	BitcoinExchange::checkKey(const std::string key) const
{
	std::string	token;
	size_t		start;
	size_t		end;
	int			v;

	end = key.find('-');
	token = key.substr(0, end);
	// std::cout << "token: '" << token << "'" << std::endl;
	if (!BitcoinExchange::isnumber(token))
		return (1);
	start = end + 1;
	end = key.find('-', start);
	token = key.substr(start, end - start);
	// std::cout << "token: '" << token << "'" << std::endl;
	if (!BitcoinExchange::isnumber(token))
		return (1);
	// std::cout << "coucou" << std::endl;
	v = std::atoi(token.c_str());
	if (v < 0 || v > 12)
		return (1);
	token = key.substr(end + 1, std::string::npos);
	if (!BitcoinExchange::isnumber(token))
		return (1);
	v = std::atoi(token.c_str());
	if (v < 0 || v > 31)
		return (1);
	return (0);
}

bool	BitcoinExchange::checkValue(const std::string value) const
{
	double	v;

	v = std::atof(value.c_str());
	if (v < 0)
		return (1);
	if (v > 1000)
		return (1);
	return (0);
}

bool	BitcoinExchange::checkRate(const std::string rate) const
{
	double	v;

	v = std::atof(rate.c_str());
	if (v < 0)
		return (1);
	return (0);
}

bool	BitcoinExchange::isnumber(const std::string s) const
{
	for (std::string::const_iterator it = s.begin(); it != s.end(); it++)
	{
		if (!std::isdigit(*it))
			return (0);
	}
	return (1);
}