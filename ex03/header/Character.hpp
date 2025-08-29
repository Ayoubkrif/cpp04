/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:24:51 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/29 15:14:35 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

class Character :	public ICharacter
{
	public:
		Character(void);
		Character(Character const &rhs);
		~Character(void);

		Character		&operator=(Character const &rhs);
		std::string		const & getName() const;
		void			equip(AMateria* m);
		void			unequip(int idx);
		void			use(int idx, ICharacter& target);
	private:
		std::string		_name;
};
