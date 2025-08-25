/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 12:45:11 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/25 13:12:47 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	_type = "Dog";
	std::cout << "[🔧]"
		<< "Dog " << this->_type
		<< " has been created (default) !"
		<< std::endl;
}

Dog::Dog(Dog &copy)
{
	_type = copy._type;
	std::cout << "[🔧]"
		<< "Dog " << this->_type
		<< " has been created (copy) !"
		<< std::endl;
}

Dog::~Dog(void)
{
	std::cout << "[💥]"
		<< "Dog " << this->_type
		<< " has been destroyed !"
		<< std::endl;
}

Dog		Dog::operator=(Dog &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void		Dog::makeSound(void)
{
	std::cout << "[🔊]"
		<< this->_type
		<< ": Woof !" 
		<< std::endl;
}
