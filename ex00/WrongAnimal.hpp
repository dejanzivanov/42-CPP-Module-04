/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:01:54 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/26 19:03:12 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include "Animal.hpp"

class WrongAnimal
{
	protected:
		std::string _type;

	public:
		WrongAnimal(void);
		WrongAnimal(const std::string &type);
		WrongAnimal(const WrongAnimal &WrongAnimal);
		virtual ~WrongAnimal();

		WrongAnimal &operator=(const WrongAnimal &WrongAnimal);

		std::string getType(void) const;
		void 		makeSound() const;

};


#endif