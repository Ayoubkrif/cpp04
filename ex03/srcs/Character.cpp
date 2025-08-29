/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:52:27 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/29 23:40:35 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)	:	_name("Random Character")
{
	std::cout << "[🔧]"
		<< "Character "
		<< _name
		<< " has been created (default) !"
		<< std::endl;
}

Character::Character(Character const &c)	: _name(c._name)
{
	std::cout << "[🔧]"
		<< "Character "
		<< _name
		<< " has been created (copy) !"
		<< std::endl;
}

Character::~Character(void)
{
	std::cout << "[💥]"
		<< "Character "
		<< this->_name
		<< " has been destroyed !"
		<< std::endl;
}

Character			&Character::operator=(Character const &rhs)
{
	(void)rhs;
	std::cout << "[🟰]"
		<< "Character assignation !"
		<< std::endl;
	return (*this);
}
