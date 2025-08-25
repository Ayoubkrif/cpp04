/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 12:45:11 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/25 13:46:12 by aykrifa          ###   ########.fr       */
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
	(void)copy;
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

Brain		Brain::operator=(Brain &rhs)
{
	(void)rhs;
	return (*this);
}
