/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceMateria.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 12:01:20 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/29 14:31:22 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class IceMateria :	public AMateria
{
	public:
		IceMateria(void);
		IceMateria(IceMateria const &copy);
		~IceMateria(void);

		IceMateria		&operator=(IceMateria const &rhs);
		IceMateria		*clone() const;
		void			use(ICharacter& target);

	protected:
		std::string		type;
};
