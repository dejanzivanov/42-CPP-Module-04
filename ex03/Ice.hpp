/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:41:55 by dzivanov          #+#    #+#             */
/*   Updated: 2022/04/11 09:41:16 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
#include "color.h"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice &ice);
		virtual ~Ice();

		Ice &operator=(const Ice &ice);
		Ice *clone() const;
		void use(ICharacter &target);
};

#endif