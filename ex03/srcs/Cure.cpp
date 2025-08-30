/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:52:27 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/30 07:52:18 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Character.hpp"

Cure::Cure(void)	:	AMateria("cure")
{
	std::cout << "[🔧]"
		<< "Cure Materia has been created (default) !"
		<< std::endl;
}

Cure::Cure(Cure const &m)	: AMateria(m)
{
	std::cout << "[🔧]"
		<< "Cure Materia has been created (copy) !"
		<< std::endl;
}

Cure::~Cure(void)
{
	std::cout << "[💥]"
		<< "Cure Materia "
		<< " has been destroyed !"
		<< std::endl;
}

Cure			&Cure::operator=(Cure const &rhs)
{
	(void)rhs;
	std::cout << "[🟰]"
		<< "Cure Materia assignation"
		<< std::endl;
	return (*this);
}

Cure			*Cure::clone() const
{
	return (new Cure());
}

void				Cure::use(ICharacter &target)
{
	std::cout << "[💗]"
		<< "* heal "
		<< target.getName()
		<< "'s wounds *"
		<< std::endl;
}
