/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:57:00 by dzivanov          #+#    #+#             */
/*   Updated: 2022/04/11 09:40:51 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "color.h"

AMateria::AMateria(void): _type("unknown")
{
	return ;
}

AMateria::AMateria(const std::string &type): _type(type)
{
	return ;
}

AMateria::AMateria(const AMateria &aMateria)
{
	*this = aMateria;
}

AMateria::~AMateria()
{
	return ;
}

AMateria &AMateria::operator=(const AMateria &aMateria)
{
	if(this != &aMateria)
	{
		_type = aMateria._type;
	}
	return (*this);
}

std::string const &AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "is doing an unkown operation on " << target.getName() << std::endl;
}

std::string output(const std::string str, const std::string color, int size)
{
	std::string name = str;

	if(str == "")
	{
		return std::string(size + 1, ' ');
	}
	if(size < 4)
	{
		size = 4;
	}
	if(name.size() > (unsigned)size - 2)
	{
		name = '[' + name.substr(0, size - 3) + '.' + ']';
	}
	else
	{
		name = '[' + name + ']';
	}
	return (std::string(size - name.size(), ' ') + color + name + " " + DEFAULT);
}