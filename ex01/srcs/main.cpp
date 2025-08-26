/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 13:08:35 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/26 12:53:37 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"

/*int	main(void)*/
/*{*/
/*	Animal	*Pets[100];*/
/**/
/*	for (int i = 0; i < 50; ++i)*/
/*		Pets[i] = new Dog();*/
/**/
/*	for (int i = 50; i < 100; ++i)*/
/*		Pets[i] = new Cat();*/
/**/
/*	for (int i = 0; i < 100; ++i)*/
/*		delete Pets[i];*/
/**/
/*	return (0);*/
/*}*/
int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Animal* k = new Cat();

	std::cout << "=====================" << std::endl;
	*k = *i;
	std::cout << "=====================" << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	delete i;
	std::cout << k->getType() << " " << std::endl;
	k->makeSound(); //wkll output the cat sound!
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	delete meta;
	delete j;
	delete k;
	return (0);
}
