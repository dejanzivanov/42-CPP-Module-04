/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:26:16 by dzivanov          #+#    #+#             */
/*   Updated: 2022/04/11 22:07:33 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "color.h"

Character::Character(void): _name("whatever")
{
	if (DEBUG_LOG)
	{
		std::cout << output("Character ", YELLOW) << "constructor has been called" << std::endl;
	}
	for (int i = 0; i < _inventorySize; i++)
	{
		_inventory[i] = NULL;
	}
}

Character::Character(const std::string &name) : _name(name)
{
	if (DEBUG_LOG)
	{
		std::cout << output("Character ", YELLOW) << "constructor has been called" << std::endl;
	}
	for (int i = 0; i < _inventorySize; i++)
	{
		_inventory[i] = NULL;
	}
}

Character::Character(const Character &character)
{
	if (DEBUG_LOG)
	{
		std::cout << output("Character ", YELLOW) << "constructor has been called" << std::endl;
	}
	*this = character;
}

Character::~Character()
{
	if (DEBUG_LOG)
	{
		std::cout << output("Character ", RED) << "destructor has been called" << std::endl;
	}
	for (int i = 0; i < _inventorySize; i++)
	{
		if(_inventory[i])
		{
			delete _inventory[i];
		}
	}
}

Character &Character::operator=(const Character &character)
{
	if(this != &character)
	{
		this->_name = character._name;
		for(int i = 0; i < _inventorySize; i++)
		{
			if(_inventory[i])
			{
				delete _inventory[i];
			}
			if(character._inventory[i])
			{
				_inventory[i] = character._inventory[i]->clone();
			}
			else
			{
				_inventory[i] = NULL;
			}
		}
	}
	return *this;
}

const std::string &Character::getName(void) const
{
	return _name;
}

void Character::equip(AMateria *m)
{
	std::cout << output(_name, CYION);

	for(int i = 0; i < _inventorySize; i++)
	{
		if(_inventory[i] == NULL)
		{
			_inventory[i] = m;
			std::cout << "equips " << m->getType() << " in a slot " << i << std::endl;
			return;
		}
	}
	std::cout << "can not equip " << m->getType() << " inventory is full" << std::endl;
	std::cout << output("", BLUE) << "...deleting materia" << std::endl;
	delete m;
}

void Character::unequip(int p_idx)
{
	if(p_idx >= 0 && p_idx < _inventorySize)
	{
		std::cout << output(_name, BLUE) << "unequips " << _inventory[p_idx]->getType() << " from slot " << p_idx << std::endl;
		_inventory[p_idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target)
{
	std::cout << output(_name, GREEN);
	if(idx >= 0 && idx < _inventorySize && _inventory[idx])
	{
		_inventory[idx]->use(target);
		return;
	}
	std::cout << "do nothing" << std::endl;
}

static std::string centering(const std::string str, int size = 0)
{
	int n = 0;
	int s1 = 0;
	int s2 = 0;
	std::string centered;
	std::string toCenter = str;

	n = toCenter.size();
	if(n > size)
	{
		toCenter = toCenter.substr(0, size - 2);
		toCenter[size - 4] = '.';
		toCenter[size - 3] = '.';
		n = toCenter.size();
	}
	s1 = (size - n) / 2;
	s2 = size - n - s1;
	centered = std::string(s1, ' ') + toCenter + std::string(s2, ' ');
	return centered;
}

void Character::outputIventory(void) const
{
	std::cout << output(_name, ORANGE) << "|";

	for(int i = 0; i < _inventorySize; i++)
	{
		if(_inventory[i])
		{
			std::cout << centering(_inventory[i]->getType()) << "|";
		}
		else
		{
			std::cout << centering("") << "|";
		}
	}
	std::cout << std::endl;
}