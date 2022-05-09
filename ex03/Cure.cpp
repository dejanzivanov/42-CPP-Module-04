/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:35:33 by dzivanov          #+#    #+#             */
/*   Updated: 2022/04/11 09:41:12 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	if(DEBUG_LOG)
	{
		std::cout << output("Cure", YELLOW) << "constructor has been called" << std::endl;
	}
}

Cure::Cure(const Cure &cure) : AMateria(cure)
{
	if(DEBUG_LOG)
	{
		std::cout << output("Cure", YELLOW) << "constructor has been called" << std::endl;
	}
	*this = cure;
}

Cure::~Cure()
{
	if(DEBUG_LOG)
	{
		std::cout << output("Cure", RED) << "destructor called" << std::endl;
	}
}

Cure &Cure::operator=(const Cure &cure)
{
	(void)cure;
	return *this;
}

Cure *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}