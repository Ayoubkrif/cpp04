/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 12:38:16 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/25 12:44:27 by aykrifa          ###   ########.fr       */
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
		Dog		operator=(Dog &rhs);

		void		makeSound(void);

};
