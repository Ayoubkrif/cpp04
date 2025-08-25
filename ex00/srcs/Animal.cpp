/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 12:45:11 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/25 13:12:56 by aykrifa          ###   ########.fr       */
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

Animal		Animal::operator=(Animal &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void		Animal::makeSound(void)
{
	std::cout << "[🔊]"
		<< this->_type
		<< ": ???..." 
		<< std::endl;
}
