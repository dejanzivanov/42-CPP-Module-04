/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:18:58 by dzivanov          #+#    #+#             */
/*   Updated: 2022/04/08 19:48:23 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP
#include "AMateria.hpp"
#include <iostream>
#include <iomanip>

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter(){};
		virtual const std::string &getName() const = 0;
		virtual void	equip(AMateria *m) = 0;
		virtual void	unequip(int idx) = 0;
		virtual void	use(int idx, ICharacter &target) = 0;
		virtual void	outputIventory(void) const = 0;
};

#endif