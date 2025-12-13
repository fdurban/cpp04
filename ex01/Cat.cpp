/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 13:55:45 by fdurban-          #+#    #+#             */
/*   Updated: 2025/12/04 16:52:03 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat(): Animal()
{
	Animal::setType("Cat");
	this->catBrain = new Brain();
	std::cout<<"Cat Class Default constructor called"<<std::endl;
}

Cat::Cat(const Cat& other): Animal(other)
{
	std::cout<<"Cat Class Copy constructor called"<<std::endl;
	this->type = other.type;
	this->catBrain = new Brain(*other.catBrain);
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout<<"Cat assignment operator called"<<std::endl;
	if(this == &other)
		return (*this);
	this->type = other.type;
	delete	this->catBrain;
	this->catBrain = new Brain(*other.catBrain);
	return (*this);
}

Cat::~Cat()
{
	delete this->catBrain;
	std::cout<<"Cat destructor called"<<std::endl;
}

void	Cat::makeSound() const
{
	std::cout<<"MEOOOOOOW"<<std::endl;
}

Brain	*Cat::getBrain(void) const
{
	return (this->catBrain);
}
