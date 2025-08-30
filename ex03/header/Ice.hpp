/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceMateria.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 12:01:20 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/30 05:48:00 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice :	public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &copy);
		~Ice(void);

		Ice		&operator=(Ice const &rhs);
		Ice		*clone() const;
		void			use(ICharacter& target);

	protected:
		std::string		type;
};
