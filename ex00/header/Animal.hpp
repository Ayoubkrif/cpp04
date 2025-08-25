/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 12:38:16 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/25 13:07:34 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Animal
{
	public:
		Animal(void);
		/*Animal(std::string type);*/
		Animal(Animal &copy);
		~Animal(void);
		Animal		operator=(Animal &rhs);

		void		makeSound(void);

	protected:
		std::string	_type;

};
