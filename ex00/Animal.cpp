/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 17:06:38 by dzivanov          #+#    #+#             */
/*   Updated: 2022/04/11 09:40:27 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
**	First time using color letters - Thanks Florence!
*/

Animal::Animal(void): _type("Animal")
{
	std::cout << YELLOW << "[Animal] " << DEFAULT << " constructor has been called" << std::endl;
}

Animal::Animal(const std::string &type): _type(type)
{
	std::cout << YELLOW << "[Animal] " << DEFAULT << " constructor has been called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	std::cout << YELLOW << "[Animal] " << DEFAULT << " copy constructor called" << std::endl;
	*this = animal;
}

Animal::~Animal()
{
	std::cout << RED << "[Animal]" << DEFAULT << " destructor has been called" << std::endl;
}

Animal &Animal::operator=(const Animal &animal)
{
	if(this != &animal)
	{
		this->_type = animal._type;
	}
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << RED << "sound is undefined" << DEFAULT << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->_type);
}