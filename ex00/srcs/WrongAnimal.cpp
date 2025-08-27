/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 12:45:11 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/27 11:47:04 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	_type = "???";
	std::cout << "[🔧]"
		<< "WrongAnimal " << this->_type
		<< " has been created (default) !"
		<< std::endl;
}

/*WrongAnimal::WrongAnimal(std::string type)*/
/*{*/
/*	_type = type;*/
/*	std::cout << "[🔧]"*/
/*		<< "WrongAnimal " << this->_type*/
/*		<< " has been created (parameter) !"*/
/*		<< std::endl;*/
/*}*/

WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
	_type = copy._type;
	std::cout << "[🔧]"
		<< "WrongAnimal " << this->_type
		<< " has been created (copy) !"
		<< std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "[💥]"
		<< "WrongAnimal " << this->_type
		<< " has been destroyed !"
		<< std::endl;
}

WrongAnimal		&WrongAnimal::operator=(WrongAnimal  const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void		WrongAnimal::makeSound(void) const
{
	std::cout << "[🔊]"
		<< this->_type
		<< ": ???..." 
		<< std::endl;
}

std::string const	WrongAnimal::getType(void) const
{
	return (this->_type);
}
