/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 13:55:45 by fdurban-          #+#    #+#             */
/*   Updated: 2025/12/04 15:19:53 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat(): Animal()
{
	Animal::setType("Cat");
	std::cout<<"Default cat constructor called"<<std::endl;
}

Cat::Cat(const Cat& other): Animal(other)
{
	std::cout<<"Cat copy constructor called"<<std::endl;
	*this = other;
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout<<"Cat assignment operator called"<<std::endl;
	if(this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout<<"Cat destructor called"<<std::endl;
}

void	Cat::makeSound() const
{
	std::cout<<"MEOOOOOOW"<<std::endl;
}

