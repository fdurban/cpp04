/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:55:05 by fdurban-          #+#    #+#             */
/*   Updated: 2026/01/08 12:40:07 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout<<"Default constructor Ice called"<<std::endl;
}

Ice::Ice(const Ice &copy): AMateria(copy)
{
	std::cout<<"Ice copy constructor called"<<std::endl;
	*this = copy; 
}

Ice&	Ice::operator=(const Ice &copy)
{
	if(this == &copy)
		return (*this);
	this->type = copy.type;
	return (*this);
}

Ice::~Ice()
{
	std::cout<<"Defaut Ice destructor called"<<std::endl;
}

AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout<<"Shoots an ice ball at"<<target.getName()<<std::endl;
}
