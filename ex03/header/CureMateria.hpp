/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CureMateria.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 12:01:20 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/29 14:39:49 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class CureMateria :	public AMateria
{
	public:
		CureMateria(void);
		CureMateria(CureMateria const &copy);
		~CureMateria(void);

		CureMateria		&operator=(CureMateria const &rhs);
		CureMateria		*clone() const;
		void			use(ICharacter& target);

	protected:
		std::string		type;
};
