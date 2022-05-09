/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 17:25:47 by dzivanov          #+#    #+#             */
/*   Updated: 2022/04/03 22:55:52 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

static void wrongTest(void)
{
	const WrongAnimal *w = new WrongCat();
	std::cout << "w is " << w->getType() << " : ";
	w->makeSound();
	delete w;

	const WrongCat *b = new WrongCat();
	std::cout << "b is " << b->getType() << " : ";
	b->makeSound();
	delete b;
}

static void subjectTest(void)
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << "j is " << j->getType() << " : ";
	j->makeSound();
	std::cout << "i is " <<  i->getType() << " : ";
	i->makeSound();
	std::cout << "m is " <<  i->getType() << " : ";
	meta->makeSound();

	delete i;
	delete j;
	delete meta;
}

int main(void)
{
	subjectTest();
	std::cout << std::endl;
	wrongTest();

	return 0;
}