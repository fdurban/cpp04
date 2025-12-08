/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 13:53:23 by fdurban-          #+#    #+#             */
/*   Updated: 2025/12/04 16:52:21 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain	*catbrain;
	public:
		Cat();
		~Cat();
		Cat(const Cat &other);
		Cat&	operator=(const Cat& other);
		void	makeSound() const;
};
