/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 12:45:11 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/26 13:02:23 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->_brain = new Brain();
	_type = "Dog";
	std::cout << "[🔧]"
		<< "Dog " << this->_type
		<< " has been created (default) !"
		<< std::endl;
}

Dog::Dog(Dog &copy)
{
	this->_brain = new Brain(*copy._brain);
	_type = copy._type;
	std::cout << "[🔧]"
		<< "Dog " << this->_type
		<< " has been created (copy) !"
		<< std::endl;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "[💥]"
		<< "Dog " << this->_type
		<< " has been destroyed !"
		<< std::endl;
}

Dog		Dog::operator=(Dog const &rhs)
{
	std::cout << "Assignement animal"
		<< std::endl;
	if (this == &rhs)
		return (*this);
	delete this->_brain;
	this->_brain = new Brain(*rhs._brain);
	this->_type = rhs._type;
	return (*this);
}

void		Dog::makeSound(void) const
{
	std::cout << "[🔊]"
		<< this->_type
		<< ": Woof !" 
		<< std::endl;
}
