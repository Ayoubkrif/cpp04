/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:51:55 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/29 14:47:34 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "IceMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "[🔧]"
		<< "Abstract Materia has been created (default) !"
		<< std::endl;
}

AMateria::AMateria(AMateria const &m)	: _type(m._type)
{
	std::cout << "[🔧]"
		<< "Abstract Materia has been created (copy) !"
		<< std::endl;
}

AMateria::AMateria(std::string const & type)	:	_type(type)
{
	std::cout << "[🔧]"
		<< "Abstract Materia "
		<< type
		<< " has been created (parameter) !"
		<< std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "[💥]"
		<< "Abstract Materia "
		<< this->_type
		<< " has been destroyed !"
		<< std::endl;
}

AMateria			&AMateria::operator=(AMateria const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

std::string const	&AMateria::getType() const
{
	return (this->_type);
}
