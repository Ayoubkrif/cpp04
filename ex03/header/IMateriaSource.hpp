/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 12:22:23 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/27 12:23:26 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class IMateriaSource
{
	public:
	virtual				~IMateriaSource();
	virtual void		learnMateria(AMateria*) = 0;
	virtual AMateria	*reateMateria(std::string const & type) = 0;
};
