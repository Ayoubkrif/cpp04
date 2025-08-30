/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 12:22:23 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/30 08:32:54 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual				~IMateriaSource(){};

		virtual void		learnMateria(AMateria*) = 0;
		virtual AMateria	*createMateria(std::string const & type) = 0;
};
