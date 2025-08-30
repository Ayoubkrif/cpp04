/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 12:22:23 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/30 06:59:07 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class IMateriaSource
{
	public:
							IMateriaSource(void);
							IMateriaSource(IMateriaSource const &copy);
		virtual				~IMateriaSource();

		IMateriaSource		&operator=(IMateriaSource const &rhs);
		virtual void		learnMateria(AMateria*) = 0;
		virtual AMateria	*createMateria(std::string const & type) = 0;
};
