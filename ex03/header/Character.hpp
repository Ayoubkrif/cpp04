/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:24:51 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/30 11:25:08 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class AMateria;

class Character :	public ICharacter
{
	public:
						Character(void);
						Character(Character const &rhs);
						Character(std::string const &name);
						~Character(void);

		Character		&operator=(Character const &rhs);
		std::string		const & getName() const;
		void			equip(AMateria* m);
		void			unequip(int idx);
		void			use(int idx, ICharacter& target);
	private:
		std::string		_name;
		AMateria		*_inventory[4];
};
