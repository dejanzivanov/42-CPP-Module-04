/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:35:26 by dzivanov          #+#    #+#             */
/*   Updated: 2022/04/11 09:41:14 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
#include "AMateria.hpp"
#include "color.h"

class Cure: public AMateria
{
	public:
		Cure(void);
		Cure(const Cure &cure);
		virtual ~Cure();
		Cure &operator=(const Cure &cure);

		Cure *clone() const;
		void use(ICharacter &target);
};

#endif