/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 13:08:35 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/27 11:35:16 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	{
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();
	Animal			*k = new Cat();
	Animal			*l = new Dog();

	std::cout << "=====================" << std::endl;
	*k = *i;
	*l = *j;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	delete i;
	std::cout << k->getType() << " " << std::endl;
	k->makeSound(); //wkll output the cat sound!
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	delete j;
	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	delete meta;
	delete k;
	delete l;
	}
	std::cout << "=====================" << std::endl;
	std::cout << "=====================" << std::endl;
	{
		const WrongAnimal	*meta = new WrongAnimal();
		const WrongAnimal	*i = new WrongAnimal();
		WrongAnimal			*k = new WrongCat();
		std::cout << "=====================" << std::endl;
		*k = *i;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		delete i;
		std::cout << k->getType() << " " << std::endl;
		k->makeSound(); //wkll output the cat sound!
		std::cout << meta->getType() << " " << std::endl;
		meta->makeSound();
		delete meta;
		delete k;
	}
	return (0);
}
