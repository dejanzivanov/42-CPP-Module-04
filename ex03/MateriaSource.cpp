/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:52:18 by dzivanov          #+#    #+#             */
/*   Updated: 2022/04/11 23:10:23 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	if (DEBUG_LOG)
	{
		std::cout << output("MateriaSource", YELLOW) << "constructor has been called" << std::endl;;
	}

	for(int i = 0; i < _inventory_size ; i++)
	{
		_inventory[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource)
{
	if (DEBUG_LOG)
	{
		std::cout << output("MateriaSource", YELLOW) << "constructor has been called" << std::endl;;
	}

	*this = materiaSource;
}

MateriaSource::~MateriaSource()
{
	if (DEBUG_LOG)
	{
		std::cout << output("MateriaSource", RED) << "destructor has been called" << std::endl;;
	}
	for(int i = 0; i < _inventory_size; i++)
	{
		if(_inventory[i])
		{
			delete _inventory[i];
		}
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiaSource)
{
	if(this != &materiaSource)
	{
		for (int i = 0; i < _inventory_size; i++)
		{
			if(_inventory[i])
			{
				delete _inventory[i];
			}
			if(materiaSource._inventory[i])
			{
				_inventory[i] = materiaSource._inventory[i]->clone();
			}
			else
			{
				_inventory[i] = NULL;
			}
		}

	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	for(int i = 0; i < _inventory_size; i++)
	{
		if(_inventory[i] == NULL)
		{
			std::cout << output("MateriaSource", CYION) << "learning " << m->getType() << std::endl;
			_inventory[i] = m;
			return ;
		}
	}

	std::cout << output("MateriaSource", CYION) << "can't learn new materia (inventory is full)" << std::endl;
	std::cout << output("", CYION) << "...deleting materia" << std::endl;
	delete m;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for(int i = 0; i < _inventory_size; i++)
	{
		if(_inventory[i] != NULL && _inventory[i]->getType() == type)
		{
			return _inventory[i]->clone();
		}
	}

	std::cout << output("MateriaSource", CYION) << "can't create " << type << " materia has not been learned" << std::endl;
	return (NULL);
}