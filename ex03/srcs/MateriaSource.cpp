/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:51:55 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/30 03:47:18 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "IceMateria.hpp"

MateriaSource::MateriaSource(void)
{
	init_Materia_array(this->_inventory, 4);
	std::cout << "[🔧]"
		<< "Materia Source has been created (default) !"
		<< std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &copy)// copie flat
{
	std::cout << "[🔧]"
		<< "Materia Source has been created (copy) !"
		<< std::endl;
}

MateriaSource::~MateriaSource(void) // delete
{
	std::cout << "[💥]"
		<< "Materia Source"
		<< " has been destroyed !"
		<< std::endl;
}

MateriaSource			&MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

std::string const	&MateriaSource::getType() const
{
	return (this->_type);
}

void				MateriaSource::use(ICharacter& target)
{
	(void)target;
}
