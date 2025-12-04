/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 13:08:36 by fdurban-          #+#    #+#             */
/*   Updated: 2025/12/04 15:15:29 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout<<"Animal default connstructor called"<<std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout<<"Animal copy constructor called"<<std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout<<"Animal assignment operator called"<<std::endl;
	if(this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout<<"Animal destructor called"<<std::endl;
}

void	Animal::makeSound() const
{
	std::cout<<"?????"<<std::endl;
}

void		Animal::setType(std::string type)
{
	this->type = type;
}
std::string	Animal::getType() const
{
	return (this->type);
}
