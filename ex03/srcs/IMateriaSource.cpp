/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:51:55 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/30 06:58:50 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(void)
{
	std::cout << "[🔧]"
		<< "Interface Materia Source has been created (default) !"
		<< std::endl;
}

IMateriaSource::IMateriaSource(IMateriaSource const &copy)// copie flat
{
	(void)copy;
	std::cout << "[🔧]"
		<< "Interface Materia Source has been created (copy) !"
		<< std::endl;
}

IMateriaSource::~IMateriaSource(void) // delete
{
	std::cout << "[💥]"
		<< "Interface Materia Source"
		<< " has been destroyed !"
		<< std::endl;
}

IMateriaSource			&IMateriaSource::operator=(IMateriaSource const &rhs)
{
	(void)rhs;
	std::cout << "[🟰]"
		<< "Interface Materia Source assignation !"
		<< std::endl;
	return (*this);
}
