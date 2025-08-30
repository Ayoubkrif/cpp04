/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 12:01:20 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/30 11:23:53 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure :	public AMateria
{
	public:
					Cure(void);
					Cure(Cure const &copy);
					~Cure(void);

		Cure		&operator=(Cure const &rhs);
		Cure		*clone() const;
		void		use(ICharacter& target);

	protected:
		std::string		type;
};
