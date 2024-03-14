/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:45:54 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/14 17:04:10 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <string>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*_knowledge[4];
	public:
		//Default constructor
		MateriaSource();

		//Copy constructor
		MateriaSource(const MateriaSource &other);

		//Assignement operator overload
		MateriaSource	&operator=(const MateriaSource &other);

		//Destructor
		~MateriaSource();

		std::string const & getName() const;
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif