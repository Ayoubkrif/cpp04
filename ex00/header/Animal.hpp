/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 12:38:16 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/27 11:44:50 by aykrifa          ###   ########.fr       */
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
		virtual ~Animal(void);
		Animal				&operator=(Animal const &rhs);
		std::string const	getType(void) const;

		virtual void		makeSound(void) const;

	protected:
		std::string	_type;

};
