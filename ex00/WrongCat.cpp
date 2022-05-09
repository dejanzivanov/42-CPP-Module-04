/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:09:26 by dzivanov          #+#    #+#             */
/*   Updated: 2022/04/11 09:40:41 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << YELLOW << "[WrongCat]" << DEFAULT << " constructor has been called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat) : WrongAnimal(wrongCat)
{
	std::cout << YELLOW << "[WrongCat]" << DEFAULT << " copy constructor has been called" << std::endl;
	*this = wrongCat;
}

WrongCat::~WrongCat()
{
	std::cout << RED << "[WrongCat]" << DEFAULT << " destructor has been called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &wrongCat)
{
	if (this != &wrongCat)
	{
		this->_type = wrongCat._type;
	}
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << GREEN << "*meoooooow*" << DEFAULT << std::endl;
}