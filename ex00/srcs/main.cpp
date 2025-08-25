/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 13:08:35 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/25 13:12:08 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	{
		Dog		Arcanin;

		Arcanin.makeSound();
	}
	{
		Cat		Miaouss;

		Miaouss.makeSound();
	}
	{
		Animal	Metamorph;

		Metamorph.makeSound();
	}
	return (0);
}
