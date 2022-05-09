/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 17:25:47 by dzivanov          #+#    #+#             */
/*   Updated: 2022/04/06 17:05:50 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#include <iomanip>

static void	outputTitle(std::string title)
{
	std::string	toPrint;
	int	size = 60;
	int	n;

	toPrint = " " + title + " ";
	n = toPrint.size();
	if (n > size)
	{
		toPrint = toPrint.substr(0, size - 2);
		toPrint[size - 4] = '.';
		toPrint[size - 3] = ' ';
		n = toPrint.size();
	}
	std::cout << std::endl << std::setfill('=') << std::setw(size) << "" << std::endl;
	std::cout << std::setw(size / 2) << toPrint.substr(0, n / 2);
	std::cout << toPrint.substr(n / 2, n);
	std::cout << std::setfill('=') << std::setw(size - size / 2 - n + n / 2) << "" << std::endl;
	std::cout << std::setfill('=') << std::setw(size) << "" << std::endl;
}

static void	leaks(void)
{
	outputTitle("LEAKS");
	const Animal	*dog = new Dog();
	const Animal	*cat = new Cat();

	delete dog;
	delete cat;
}

static void	deepCopy(void)
{
	outputTitle("DEEP COPY");
	Dog	dog1;
	Dog	dog2;

	dog1.outputIdeas();
	dog2.outputIdeas();

	dog2 = dog1;
	std::cout << std::endl << "After assignation :" << std::endl;
	dog1.outputIdeas();
	dog2.outputIdeas();

	std::cout << std::endl;

	Cat	cat1;
	Cat	cat2(cat1);

	cat1.outputIdeas();
	cat2.outputIdeas();
}

static void	subjectCheck(int size)
{
	outputTitle("SUBJECT");
	Animal	*arrayAnimals[2 * size];

	for (int i = 0; i < size; i++)
	{
		arrayAnimals[i] = new Dog();
		arrayAnimals[size + i] = new Cat();
	}

	for (int i = 0; i < 2 * size; i++)
		delete arrayAnimals[i];
}


int main(void)
{

	subjectCheck(5);
	leaks();
	deepCopy();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// delete j;//should not create a leak
	// delete i;

	return 0;
}