/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 12:01:20 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/30 11:23:41 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ICharacter;

class AMateria
{
	public:
							AMateria(void);
							AMateria(AMateria const &m);
							AMateria(std::string const & type);
		virtual				~AMateria(void);

		AMateria			&operator=(AMateria const &rhs);
		std::string const	&getType() const;
		virtual AMateria* 	clone() const = 0;
		virtual void		use(ICharacter& target);

	protected:
		std::string			_type;
};

void	copy_Materia_array(AMateria *dest[], AMateria *const src[], unsigned int size);
void	delete_Materia_array(AMateria *array[], unsigned int size);
