/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:56:57 by dzivanov          #+#    #+#             */
/*   Updated: 2022/04/11 09:40:55 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iomanip>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria(void);
		AMateria(const AMateria &amateria);
		AMateria(std::string const &type);
		virtual ~AMateria();

		AMateria &operator=(const AMateria &amateria);
		std::string const &getType() const;

		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);

};

std::string	output(const std::string str, const std::string color, int size = 11);

#endif