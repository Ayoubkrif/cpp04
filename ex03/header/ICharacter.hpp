/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:24:51 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/30 08:32:48 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex03.h"

class ICharacter
{
	public:
		virtual ~ICharacter(){};

		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};
