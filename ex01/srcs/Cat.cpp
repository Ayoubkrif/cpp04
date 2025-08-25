/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 12:45:11 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/25 14:05:01 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->_brain = new Brain();
	_type = "Cat";
	std::cout << "[🔧]"
		<< "Cat " << this->_type
		<< " has been created (default) !"
		<< std::endl;
}

Cat::Cat(Cat &copy)
{
	this->_brain = new Brain();
	_type = copy._type;
	std::cout << "[🔧]"
		<< "Cat " << this->_type
		<< " has been created (copy) !"
		<< std::endl;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "[💥]"
		<< "Cat " << this->_type
		<< " has been destroyed !"
		<< std::endl;
}

Cat		Cat::operator=(Cat &rhs)
{
	if (this == &rhs)
		return (*this);
	delete this->_brain;
	this->_brain = rhs._brain;
	this->_type = rhs._type;
	return (*this);
}

void		Cat::makeSound(void)
{
	std::cout << "[🔊]"
		<< this->_type
		<< ": Meow !" 
		<< std::endl;
}
