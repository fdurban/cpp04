/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 12:42:20 by fdurban-          #+#    #+#             */
/*   Updated: 2025/12/10 13:13:50 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

Character::Character()
{
	std::cout<<"Character default constructor called"<<std::endl;
}

Character::Character(std::string namex)
{
	this->name = namex;
	for(int i = 0; i < 4; i++)
	{
		inventory[i] = NULL;
		learntMateria[i] = NULL;
	}
	std::cout<<"Character parametrized constructor called"<<std::endl
}

Character::~Character()
{
	std::cout<<"Character destructor called"<<std::endl;
	for(int i = 0; i < 4; i++)
	{
		delete inventory[i];
		delete learntMateria[i];
	}
}

Character::Character(const Character &copy)
{
	std::cout<<"Character Copy constructor called"<<std::endl;
	for(int i = 0; i < 4; i++)
	{
		if(this->inventory[i])
			delete this->inventory[i];
	}
	for(int i = 0; i < 4; i++)
	{
		if(copy.inventory[i])
			this->inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	return (*this);
}

void	Character::equip(AMateria *m)
{
	if(!m)
		std::cout<<"No Amateria found to equip"<<std::endl;
	for(int i = 0; i < 4; i++)
	{
		if(this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			return;
		}
	}
}

void	Character::unequip(int idx)
{
	if(this->inventory[idx] != NULL)
	{
		this->inventory[idx] = NULL;
	}
	else
		std::cout<<"Could not empty the materia, spot is empty"<<std::endl;
}

void	Character::use(int idx, ICharacter &target)
{
	if(this->inventory[idx] != NULL)
		this->inventory[idx]->use(target);
	else
		std::cout<<"Could not access to use the materia, spot is empty"<<std::endl;
}
