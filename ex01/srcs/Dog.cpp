/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 12:45:11 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/25 13:12:41 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	_type = "Cat";
	std::cout << "[🔧]"
		<< "Cat " << this->_type
		<< " has been created (default) !"
		<< std::endl;
}

Cat::Cat(Cat &copy)
{
	_type = copy._type;
	std::cout << "[🔧]"
		<< "Cat " << this->_type
		<< " has been created (copy) !"
		<< std::endl;
}

Cat::~Cat(void)
{
	std::cout << "[💥]"
		<< "Cat " << this->_type
		<< " has been destroyed !"
		<< std::endl;
}

Cat		Cat::operator=(Cat &rhs)
{
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
