/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:52:20 by dzivanov          #+#    #+#             */
/*   Updated: 2022/04/09 17:22:35 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
#include "color.h"

class MateriaSource : public IMateriaSource
{
	protected:
		static const int _inventory_size = 4;
		AMateria *_inventory[_inventory_size];

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &materiaSource);
		virtual ~MateriaSource();

		MateriaSource &operator=(const MateriaSource &materiaSource);

		void learnMateria(AMateria *m);
		AMateria *createMateria(const std::string &type);
};

#endif