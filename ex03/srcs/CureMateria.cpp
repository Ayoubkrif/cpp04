/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CureMateria.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:52:27 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/29 14:52:12 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CureMateria.hpp"
#include "ICharacter.hpp"

CureMateria::CureMateria(void)	:	AMateria("cure")
{
	std::cout << "[🔧]"
		<< "Cure Materia has been created (default) !"
		<< std::endl;
}

CureMateria::CureMateria(CureMateria const &m)	: AMateria(m)
{
	std::cout << "[🔧]"
		<< "Cure Materia has been created (copy) !"
		<< std::endl;
}

CureMateria::~CureMateria(void)
{
	std::cout << "[💥]"
		<< "Cure Materia "
		<< this->_type
		<< " has been destroyed !"
		<< std::endl;
}

CureMateria			&CureMateria::operator=(CureMateria const &rhs)
{
	(void)rhs;
	std::cout << "[🟰]"
		<< "Cure Materia assignation"
		<< std::endl;
	return (*this);
}

CureMateria			*CureMateria::clone() const
{
	return (new CureMateria());
}

void				use(ICharacter &target)
{
	std::cout << "[💗]"
		<< "* heal "
		<< target.getName()
		<< "'s wounds *"
		<< std::endl;
}
