/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:56:45 by dzivanov          #+#    #+#             */
/*   Updated: 2022/04/05 14:41:15 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"), _brain(new Brain())
{
	this->outputIdeas();
	std::cout << YELLOW << "[Cat]" << DEFAULT << " constructor has been called" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal("Cat"), _brain(new Brain(*(cat._brain)))
{
	std::cout << YELLOW << "[Cat]" << DEFAULT << " copy constructor has been called" << std::endl;
	*this = cat;
}

Cat::~Cat()
{
	std::cout << RED << "[Cat]" << DEFAULT << " destructor has been called" << std::endl;
	delete _brain;
}

Cat &Cat::operator=(const Cat &cat)
{
	if(this != &cat)
	{
		this->_type = cat._type;
		*(this->_brain) = *(cat._brain);
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << GREEN << " meow meow " << DEFAULT << std::endl;
}

void Cat::outputIdeas(void) const
{
	this->_brain->outputIdeas();
	std::cout << "I am at cats brain " << &this->_brain << std::endl;
}