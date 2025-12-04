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

Brain::Brain();

Brain::~Brain();

Brain::Brain(const Brain& other)
{
	*this = other;
}

Brain&	Brain::operator=(const Brain& other)
{
	for(int i = 0;i < 100; i++)
	{
		this->ideas[i] = other.ideas[i]
	}
}

const std::string	Brain::getIdeas()
{
	return (this->ideas);
}

void	Brain::setIdeas()
{
	for(int = 0; i < 100; i++)
	{
		this->ideas[i] = "Let's eat the same food fot the "<<i<<"th"<<" time."<<std::endl;
	}
}
