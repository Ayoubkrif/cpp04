/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 12:22:23 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/30 03:48:20 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
						MateriaSource(void);
						MateriaSource(MateriaSource const &copy);
						~MateriaSource(void);

		MateriaSource	&operator=(MateriaSource const &rhs);
		void			learnMateria(AMateria*);
		AMateria		*createMateria(std::string const & type);

	private:
		AMateria		*_inventory[4];
};
