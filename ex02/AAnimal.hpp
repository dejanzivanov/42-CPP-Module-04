/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 17:06:40 by dzivanov          #+#    #+#             */
/*   Updated: 2022/04/06 17:19:44 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
#include "color.h"

class AAnimal
{
	protected:
		std::string _type;

	public:
		AAnimal(void);
		AAnimal(const std::string &type);
		AAnimal(const AAnimal &animal);
		virtual ~AAnimal();

		AAnimal &operator=(const AAnimal &animal);

		std::string		getType(void)const;
		virtual void	makeSound(void) const = 0;


};

#endif