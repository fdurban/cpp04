/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdurban- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 11:40:24 by fdurban-          #+#    #+#             */
/*   Updated: 2025/12/04 15:01:10 by fdurban-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
	protected:
		std::string	type;
	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(const AAnimal &other);
		AAnimal&	operator=(const AAnimal& other);
		virtual void	makeSound() const = 0;
		void	setType(std::string type);
		std::string	getType() const;
		virtual Brain*	getBrain() const;
};

#endif

