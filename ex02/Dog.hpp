/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 12:55:12 by fdurban-          #+#    #+#             */
/*   Updated: 2025/12/04 15:16:16 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*dogbrain;
	public:
		Dog();
		~Dog();
		Dog(const Dog &other);
		Dog&	operator=(const Dog& other);
		void	makeSound() const;
};
