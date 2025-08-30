/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:51:55 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/30 04:12:59 by aykrifa          ###   ########.fr       */
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
	delete_Materia_array(this->_inventory, 4);
	copy_Materia_array(this->_inventory, rhs._inventory, 4);
	if (this == &rhs)
		return (*this);
	return (*this);
}
