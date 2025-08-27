/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 12:38:16 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/27 11:29:33 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	WrongAnimal
{
	public:
		WrongAnimal(void);
		/*WrongAnimal(std::string type);*/
		WrongAnimal(WrongAnimal &copy);
		~WrongAnimal(void);
		WrongAnimal				operator=(WrongAnimal const &rhs);
		std::string const	getType(void) const;

		void		makeSound(void) const;

	protected:
		std::string	_type;

};
