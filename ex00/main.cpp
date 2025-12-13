/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 13:48:08 by fdurban-          #+#    #+#             */
/*   Updated: 2025/12/04 15:01:50 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete i; delete j; delete meta;
	}
	{
		std::cout<<std::endl;
		const WrongAnimal* meta2 = new WrongAnimal();
		const WrongAnimal* k = new WrongCat();
		std::cout<<k->getType()<<" "<<std::endl;
		k->makeSound();
		
		std::cout<<meta2->getType()<<" "<<std::endl;
		meta2->makeSound();
		delete k; delete meta2;
	}
	return (0);
}
