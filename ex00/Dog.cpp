/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 18:19:25 by dzivanov          #+#    #+#             */
/*   Updated: 2022/04/03 22:41:40 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << YELLOW << "[Dog]" << DEFAULT << " constructor has been called" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
	std::cout << YELLOW << "[Dog]" << DEFAULT << " copy constructor has been called" << std::endl;
	*this = dog;
}

Dog::~Dog()
{
	std::cout << RED << "[Dog]" << DEFAULT << " destructor has been called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
	if(this != &dog)
	{
		this->_type = dog._type;
	}
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << GREEN << "bark bark" <<  DEFAULT << std::endl;
}