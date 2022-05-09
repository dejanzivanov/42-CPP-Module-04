/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 17:06:38 by dzivanov          #+#    #+#             */
/*   Updated: 2022/04/06 17:28:34 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/*
**	First time using color letters - Thanks Florence!
*/

AAnimal::AAnimal(void): _type("Animal")
{
	std::cout << YELLOW << "[Animal] " << DEFAULT << " constructor has been called" << std::endl;
}

AAnimal::AAnimal(const std::string &type): _type(type)
{
	std::cout << YELLOW << "[Animal] " << DEFAULT << " constructor has been called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal)
{
	std::cout << YELLOW << "[Animal] " << DEFAULT << " copy constructor called" << std::endl;
	*this = animal;
}

AAnimal::~AAnimal()
{
	std::cout << RED << "[Animal]" << DEFAULT << " destructor has been called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &animal)
{
	if(this != &animal)
	{
		this->_type = animal._type;
	}
	return (*this);
}

void AAnimal::makeSound(void) const
{
	std::cout << RED << "sound is undefined" << DEFAULT << std::endl;
}

std::string AAnimal::getType(void) const
{
	return (this->_type);
}