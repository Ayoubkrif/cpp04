/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceMateria.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:52:27 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/30 00:23:57 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IceMateria.hpp"
#include "Character.hpp"

IceMateria::IceMateria(void)	:	AMateria("ice")
{
	std::cout << "[🔧]"
		<< "Ice Materia has been created (default) !"
		<< std::endl;
}

IceMateria::IceMateria(IceMateria const &m)	: AMateria(m)
{
	std::cout << "[🔧]"
		<< "Ice Materia has been created (copy) !"
		<< std::endl;
}

IceMateria::~IceMateria(void)
{
	std::cout << "[💥]"
		<< "Ice Materia "
		<< this->_type
		<< " has been destroyed !"
		<< std::endl;
}

IceMateria			&IceMateria::operator=(IceMateria const &rhs)
{
	(void)rhs;
	std::cout << "[🟰]"
		<< "Ice Materia assignation !"
		<< std::endl;
	return (*this);
}

IceMateria			*IceMateria::clone() const
{
	return (new IceMateria());
}

void				IceMateria::use(ICharacter &target)
{
	std::cout << "[🥶]"
		<< "* shoots an ice bolt at "
		<< target.getName()
		<< " *"
		<< std::endl;
}
