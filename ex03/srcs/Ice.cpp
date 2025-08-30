/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:52:27 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/30 07:04:07 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Character.hpp"

Ice::Ice(void)	:	AMateria("ice")
{
	std::cout << "[🔧]"
		<< "Ice Materia has been created (default) !"
		<< std::endl;
}

Ice::Ice(Ice const &m)	: AMateria(m)
{
	std::cout << "[🔧]"
		<< "Ice Materia has been created (copy) !"
		<< std::endl;
}

Ice::~Ice(void)
{
	std::cout << "[💥]"
		<< "Ice Materia "
		<< " has been destroyed !"
		<< std::endl;
}

Ice			&Ice::operator=(Ice const &rhs)
{
	(void)rhs;
	std::cout << "[🟰]"
		<< "Ice Materia assignation !"
		<< std::endl;
	return (*this);
}

Ice			*Ice::clone() const
{
	return (new Ice());
}

void				Ice::use(ICharacter &target)
{
	std::cout << "[🥶]"
		<< "* shoots an ice bolt at "
		<< target.getName()
		<< " *"
		<< std::endl;
}
