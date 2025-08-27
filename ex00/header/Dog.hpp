/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 12:38:16 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/27 11:45:06 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Animal.hpp"

class	Dog: public Animal
{
	public:
		Dog(void);
		Dog(Dog &copy);
		~Dog(void);
		Dog			&operator=(Dog const &rhs);

		void		makeSound(void) const;

};
