/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:49:47 by fdurban-          #+#    #+#             */
/*   Updated: 2025/12/09 15:51:47 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout<<"Default cconstructor called"<<std::endl;
}

Cure::Cure(const Cure &copy): AMateria(copy)
{
	std::cout<<"Cure copy constructor called"<<std::endl;
	*this = copy; 
}

Cure&	Cure::operator=(const Cure &copy)
{
	if(this == &copy)
		return (*this);
	this->type = copy.type;
	return (*this);
}

Cure::~Cure()
{
	std::ccout<<"Defaut Cure destructor called"
}

