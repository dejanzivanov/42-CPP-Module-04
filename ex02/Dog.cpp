/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 18:19:25 by dzivanov          #+#    #+#             */
/*   Updated: 2022/04/06 17:27:38 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal("Dog"), _brain(new Brain())
{
	this->outputIdeas();
	std::cout << YELLOW << "[Dog]" << DEFAULT << " constructor has been called" << std::endl;
}

Dog::Dog(const Dog &dog) : AAnimal(dog), _brain(new Brain(*(dog._brain)))
{
	std::cout << YELLOW << "[Dog]" << DEFAULT << " copy constructor has been called" << std::endl;
	*this = dog;
}

Dog::~Dog()
{
	std::cout << RED << "[Dog]" << DEFAULT << " destructor has been called" << std::endl;
	delete _brain;
}

Dog &Dog::operator=(const Dog &dog)
{
	if(this != &dog)
	{
		this->_type = dog._type;
		*(this->_brain) = *(dog._brain);
	}
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << GREEN << "bark bark" <<  DEFAULT << std::endl;
}

void Dog::outputIdeas(void) const
{
	this->_brain->outputIdeas();
	std::cout << "I am at this brain " << &this->_brain << std::endl;
}