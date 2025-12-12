/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:02:15 by fdurban-          #+#    #+#             */
/*   Updated: 2025/12/10 12:53:03 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): type(NULL)
{
	std::cout<<"AMateria default constructor called"<<std::endl;
}

AMateria::AMateria(std::string const &type) : type(type)
{
	std::cout<<"AMateria Parameterized default constructor called"<<std::endl;
}

AMateria::AMateria(AMateria const &copy)
{
	std::cout<<"AMateria copy constructor called"<<std::endl;
	*this = copy
}

AMateria&	AMateria::operator=(const AMateria &copy)
{
	if (this == &copy)
		return (*this);
	this->type = copy.type;
	return (*this);
}
AMateria::~AMateria()
{
	std::cout<<"AMateria destructor called"<<std::endl;
}

std::string const	&AMateria::getType(void) const
{
	return (this->type);
}
