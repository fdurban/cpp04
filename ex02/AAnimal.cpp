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

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	setType("Default AAnimal");
	std::cout<<"AAnimal default connstructor called"<<std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
	std::cout<<"AAnimal copy constructor called"<<std::endl;
	*this = other;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	std::cout<<"AAnimal assignment operator called"<<std::endl;
	if(this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout<<"AAnimal destructor called"<<std::endl;
}

void	AAnimal::makeSound() const
{
	std::cout<<"?????"<<std::endl;
}

void		AAnimal::setType(std::string type)
{
	this->type = type;
}
std::string	AAnimal::getType() const
{
	return (this->type);
}

Brain	*AAnimal::getBrain() const {
	return (0);
}
