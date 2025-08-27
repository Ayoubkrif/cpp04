/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 13:08:35 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/27 11:36:48 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	Animal	*Pets[100];

	for (int i = 0; i < 50; ++i)
		Pets[i] = new Dog();

	for (int i = 50; i < 100; ++i)
		Pets[i] = new Cat();

	for (int i = 0; i < 100; ++i)
		delete Pets[i];

	return (0);
}
