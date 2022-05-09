/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 17:06:40 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/26 17:52:49 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
#include "color.h"

class Animal
{
	protected:
		std::string _type;

	public:
		Animal(void);
		Animal(const std::string &type);
		Animal(const Animal &animal);
		virtual ~Animal();

		Animal &operator=(const Animal &animal);

		std::string		getType(void)const;
		virtual void	makeSound(void) const;


};

#endif