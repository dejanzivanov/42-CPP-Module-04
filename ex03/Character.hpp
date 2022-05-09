/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:26:14 by dzivanov          #+#    #+#             */
/*   Updated: 2022/04/11 09:41:02 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

class AMateria;

class Character: public ICharacter
{
	protected:
		static const int	_inventorySize = 4;
		AMateria 			*_inventory[_inventorySize];
		std::string			_name;

	public:
		Character(void);
		Character(const std::string &name);
		Character(const Character &character);
		virtual ~Character();

		Character &operator=(const Character &character);

		const std::string &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
		void outputIventory(void) const;

};

#endif