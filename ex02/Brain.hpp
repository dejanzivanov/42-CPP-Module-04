/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 23:25:41 by dzivanov          #+#    #+#             */
/*   Updated: 2022/04/05 13:26:19 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
# define BRAIN_HPP
#include "color.h"
#include <iostream>
#include <cstdlib>


class Brain
{
	protected:
		std::string _ideas[100];
	public:
		Brain(void);
		Brain(const Brain &brain);
		virtual ~Brain();
		Brain &operator=(const Brain &brain);

		void outputIdeas(void) const;
		std::string generateIdeas(int size);
};

#endif