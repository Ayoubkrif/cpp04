/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 12:45:11 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/27 11:48:00 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	_type = "???";
	std::cout << "[🔧]"
		<< "Animal " << this->_type
		<< " has been created (default) !"
		<< std::endl;
}

/*Animal::Animal(std::string type)*/
/*{*/
/*	_type = type;*/
/*	std::cout << "[🔧]"*/
/*		<< "Animal " << this->_type*/
/*		<< " has been created (parameter) !"*/
/*		<< std::endl;*/
/*}*/

Animal::Animal(Animal &copy)
{
	_type = copy._type;
	std::cout << "[🔧]"
		<< "Animal " << this->_type
		<< " has been created (copy) !"
		<< std::endl;
}

Animal::~Animal(void)
{
	std::cout << "[💥]"
		<< "Animal " << this->_type
		<< " has been destroyed !"
		<< std::endl;
}

Animal		&Animal::operator=(Animal const &rhs)
{
	std::cout << "Assignement animal"
		<< std::endl;
	this->_type = rhs._type;
	return (*this);
}

void		Animal::makeSound(void) const
{
	std::cout << "[🔊]"
		<< this->_type
		<< ": ???..." 
		<< std::endl;
}

std::string const	Animal::getType(void) const
{
	return (this->_type);
}
