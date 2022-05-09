/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 18:51:06 by dzivanov          #+#    #+#             */
/*   Updated: 2022/04/03 22:52:18 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Unknown")
{
	std::cout << YELLOW << "[Wrong Animal]" << DEFAULT " constructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type)
{
	std::cout << YELLOW << "[WrongAnimal]" << DEFAULT << " constructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal)
{
	std::cout << YELLOW << "[WrongAnimal]" << DEFAULT << " copy constructor has been called" << std::endl;
	*this = wrongAnimal;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "[WrongAnimal]" << DEFAULT << " destructor has been called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &wrongAnimal)
{
	if (this != &wrongAnimal)
	{
		this->_type = wrongAnimal._type;
	}
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << RED << "undefined" << DEFAULT << std::endl;
}