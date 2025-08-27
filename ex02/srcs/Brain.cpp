/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 12:45:11 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/27 11:49:17 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "[🔧]"
		<< "Brain "
		<< " has been created (default) !"
		<< std::endl;
}

Brain::Brain(Brain &copy)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	std::cout << "[🔧]"
		<< "Brain " 
		<< " has been created (copy) !"
		<< std::endl;
}

Brain::~Brain(void)
{
	std::cout << "[🤯]"
		<< "Brain "
		<< " has been destroyed !"
		<< std::endl;
}

Brain		&Brain::operator=(Brain const &rhs)
{
	std::cout << "Assignement Brain"
		<< std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	(void)rhs;
	return (*this);
}
