/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 12:45:11 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/27 11:47:12 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	_type = "WrongCat";
	std::cout << "[🔧]"
		<< "WrongCat " << this->_type
		<< " has been created (default) !"
		<< std::endl;
}

WrongCat::WrongCat(WrongCat &copy)
{
	_type = copy._type;
	std::cout << "[🔧]"
		<< "WrongCat " << this->_type
		<< " has been created (copy) !"
		<< std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "[💥]"
		<< "WrongCat " << this->_type
		<< " has been destroyed !"
		<< std::endl;
}

WrongCat		&WrongCat::operator=(WrongCat const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void		WrongCat::makeSound(void) const
{
	std::cout << "[🔊]"
		<< this->_type
		<< ": Meow !" 
		<< std::endl;
}
