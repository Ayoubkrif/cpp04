/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:51:55 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/30 05:49:52 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	init_Materia_array(this->_inventory, 4);
	std::cout << "[🔧]"
		<< "Materia Source has been created (default) !"
		<< std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &copy)// copie flat
{
	copy_Materia_array(this->_inventory, copy._inventory, 4);
	std::cout << "[🔧]"
		<< "Materia Source has been created (copy) !"
		<< std::endl;
}

MateriaSource::~MateriaSource(void) // delete
{
	delete_Materia_array(this->_inventory, 4);
	std::cout << "[💥]"
		<< "Materia Source"
		<< " has been destroyed !"
		<< std::endl;
}

MateriaSource			&MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this == &rhs)
		return (*this);
	delete_Materia_array(this->_inventory, 4);
	copy_Materia_array(this->_inventory, rhs._inventory, 4);
	std::cout << "[🟰]"
		<< "Materia Source assignation !"
		<< std::endl;
	return (*this);
}

void			MateriaSource::learnMateria(AMateria *m)
{
	std::cout << "[📖]"
		<< "Materia Source try to learn a new Materia !"
		<< std::endl;
	int i = 0;
	while (this->_inventory[i] != 0 && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << "[❌]"
		<< "Cannot learn: full !"
		<< std::endl;
	}
	this->_inventory[i] = m;
	std::cout << "[✅]"
		<< "Materia Source learned a new Materia !"
		<< std::endl;
}

AMateria		*MateriaSource::createMateria(std::string const &type)
{
	std::cout << "[🔨]"
		<< "Materia Source try to create a new Materia !"
		<< std::endl;
	int i = 0;
	while (this->_inventory[i] != 0 && i < 4)
	{
		if (this->_inventory[i]->getType() == type)
		{
			std::cout << "[✅]"
				<< "Materia Source create a new Materia !"
				<< std::endl;
			return (this->_inventory[i]->clone());
		}
		i++;
	}
	std::cout << "[❌]"
	<< "Cannot create: no match !"
	<< std::endl;
	return (NULL);
}
