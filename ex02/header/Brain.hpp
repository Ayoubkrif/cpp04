/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 13:39:47 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/27 11:48:46 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Brain
{
	public:
		Brain(void);
		Brain(Brain &copy);
		~Brain(void);
		Brain			&operator=(Brain const &rhs);

		std::string		ideas[100];

};
