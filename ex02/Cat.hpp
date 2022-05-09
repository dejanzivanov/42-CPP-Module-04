/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:01:47 by dzivanov          #+#    #+#             */
/*   Updated: 2022/04/06 17:28:11 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain *_brain;
	public:
		Cat(void);
		Cat(const Cat &cat);
		~Cat();
		Cat &operator=(const Cat &cat);

		void makeSound(void) const;
		void outputIdeas(void) const;

};

#endif