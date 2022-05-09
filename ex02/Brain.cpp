/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 23:25:27 by dzivanov          #+#    #+#             */
/*   Updated: 2022/04/11 23:03:33 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << YELLOW << "[Brain] constructor has been called" << DEFAULT << std::endl;
	for (int i = 0; i < 100; i++)
	{
		_ideas[i] = Brain::generateIdeas(5);
	}
}

Brain::Brain(const Brain &brain)
{
	std::cout << YELLOW << "[Brain] copy constructor has been called" << DEFAULT << std::endl;
	for (int i = 0; i < 100; i++)
	{
		_ideas[i] = brain._ideas[i];
	}
	*this = brain;
}

Brain &Brain::operator=(const Brain &brain)
{
	std::cout << YELLOW << "[Brain] assignment overload has been called" << DEFAULT << std::endl;
	if(this != &brain)
	{
		for (int i = 0; i < 100; i++)
		{
			this->_ideas[i] = brain._ideas[i];
		}
	}
	return *this;
}

Brain::~Brain(void)
{
	std::cout << RED << "[Brain] destructor has been called" << DEFAULT << std::endl;
}

void Brain::outputIdeas(void) const
{
	std::cout << CYION << "[Brain] says: " << _ideas[0] <<  "," <<  _ideas[1] <<  "," << _ideas[2] <<  "," << _ideas[3] <<  "," << _ideas[4] <<  "," << _ideas[5] <<  "...." << std::endl;
}

std::string Brain::generateIdeas(int size)
{
	const std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
	std::string		randomIdea = "";

	for(int i = 0; i < size; i++)
	{
		randomIdea += alphabet[std::rand() % alphabet.size()];
	}
	return (randomIdea);
}