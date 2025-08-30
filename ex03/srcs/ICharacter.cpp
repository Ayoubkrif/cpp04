/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:51:55 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/30 07:01:01 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(void)
{
	std::cout << "[🔧]"
		<< "Interface Character has been created (default) !"
		<< std::endl;
}

ICharacter::ICharacter(ICharacter const &copy)// copie flat
{
	(void)copy;
	std::cout << "[🔧]"
		<< "Interface Character has been created (copy) !"
		<< std::endl;
}

ICharacter::~ICharacter(void) // delete
{
	std::cout << "[💥]"
		<< "Interface Character"
		<< " has been destroyed !"
		<< std::endl;
}

ICharacter			&ICharacter::operator=(ICharacter const &rhs)
{
	(void)rhs;
	std::cout << "[🟰]"
		<< "Interface Character assignation !"
		<< std::endl;
	return (*this);
}
