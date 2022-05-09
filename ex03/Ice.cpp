/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:41:48 by dzivanov          #+#    #+#             */
/*   Updated: 2022/04/11 09:41:17 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	if(DEBUG_LOG)
	{
		std::cout << output("Ice", YELLOW) << "constructor has been called" << std::endl;
	}
}

Ice::Ice(const Ice &ice) : AMateria(ice)
{
	if(DEBUG_LOG)
	{
		std::cout << output("Ice", YELLOW) << "constructor has been called" << std::endl;
	}
}

Ice::~Ice()
{
	if (DEBUG_LOG)
	{
		std::cout << output("Ice", RED) << "destructor has been called" << std::endl;;
	}
}

Ice &Ice::operator=(const Ice &ice)
{
	(void)ice;
	return (*this);
}

Ice *Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}