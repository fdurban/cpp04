/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 12:54:50 by fdurban-          #+#    #+#             */
/*   Updated: 2025/12/04 15:18:44 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): Animal()
{
	Animal::setType("Dog");
	std::cout<<"Default dog constructor called"<<std::endl;
}

Dog::Dog(const Dog& other): Animal(other)
{
	std::cout<<"Dog copy constructor called"<<std::endl;
	this->type = other.type;
	delete this->dogBrain;
	this->dogbrain = new Brain(*other.dogbrain);
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout<<"Dog assignment operator called"<<std::endl;
	if(this == &other)
		return (*this);
	this->type = other.type;
	delete	this->dogBrain;
	return (*this);
}

Dog::~Dog()
{
	std::cout<<"Dog destructor called"<<std::endl;
	delete this->dogBrain;
}

void	Dog::makeSound() const
{
	std::cout<<"WOF WOF"<<std::endl;
}

const std::string		Dog::getIdeas(unsigned int idx) const {

	return (this->brainDog->getIdeas(idx));
}

Brain	*Dog::getBrain(void) const{

	return (this->brainDog);
}
