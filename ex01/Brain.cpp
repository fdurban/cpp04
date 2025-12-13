/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:14:55 by fdurban-          #+#    #+#             */
/*   Updated: 2025/12/04 16:52:06 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"
Brain::Brain()
{
	std::cout<<"Brain Class Default constructor called"<<std::endl:
	setIdeas();
}

Brain::~Brain()
{
	std::cout<<"Brain Class Destructor called"<<std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout<<"Brain class copy constructor called"<<std::endl;
	*this = other;
}

Brain&	Brain::operator=(const Brain& other)
{
	for(int i = 0;i < 100; i++)
	{
		this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

const std::string	Brain::getIdeas(int i)
{
	if(i >= 100 || i < 0)
	{
		std::cout<<"Wrong idea index"<<std::endl;
		return (0);
	}
	return (this->ideas[i]);
}

void	Brain::setIdeas()
{
	for(int i= 0; i < 100; i++)
	{
		this->ideas[i] = "Let's eat the same food again!!";
	}
}
