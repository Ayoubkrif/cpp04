/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:52:27 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/30 08:41:59 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(void)	:	_name("Random Character"), _inventory()
{
	std::cout << "[🔧]"
		<< "Character "
		<< _name
		<< " has been created (default) !"
		<< std::endl;
}

Character::Character(std::string const &name)	:_name(name), _inventory()
{
	std::cout << "[🔧]"
		<< "Character "
		<< _name
		<< " has been created (parameter) !"
		<< std::endl;
}

Character::Character(Character const &c)	: _name(c._name), _inventory()
{
	std::cout << "[🔧]"
		<< "Character "
		<< _name
		<< " has been created (copy) !"
		<< std::endl;
}

Character::~Character(void)
{
	delete_Materia_array(this->_inventory, 4);
	std::cout << "[💥]"
		<< "Character "
		<< this->_name
		<< " has been destroyed !"
		<< std::endl;
}

Character			&Character::operator=(Character const &rhs)
{
	if (this == &rhs)
		return (*this);
	delete_Materia_array(this->_inventory, 4);
	copy_Materia_array(this->_inventory, rhs._inventory, 4);
	std::cout << "[🟰]"
		<< "Character assignation !"
		<< std::endl;
	return (*this);
}

std::string const	&Character::getName() const
{
	return (this->_name);
}

void				Character::equip(AMateria* m)
{
	if (!m)
		return ;
	std::cout << "[🫴]"
		<< this->_name
		<< " try to equip a Materia"
		<< std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == m)
		{
			std::cout << "[❌]"
				<< "Can't equip: already in inventory !"
				<< std::endl;
			return ;
		}
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			std::cout << "[✅]"
				<< "Materia added to inventory"
				<< std::endl;
			return ;
		}
	}
	std::cout << "[❌]"
		<< "Can't equip: inventory full !"
		<< std::endl;
}

void				Character::unequip(int idx)
{
	this->_inventory[idx] = NULL;
	std::cout << "[🫳]"
		<< this->_name
		<< " throw a Materia !" 
		<< std::endl;
}

void				Character::use(int idx, ICharacter& target)
{
	std::cout << "[⚙️ ]"
		<< this->_name
		<< " try to use a Materia !"
		<< std::endl;
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
	{
		std::cout << "[❌]Cannot use: no Materia here !"
			<< std::endl;
	}
}
