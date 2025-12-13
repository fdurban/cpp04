#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout<<"WrongAnimal Default constructor called"<<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout<<"WrongAnimal copy constructor called"<<std::endl;
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout<<"WrongAnimal assignment operator called"<<std::endl;
	if(this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout<<"WrongAnimal destructor called"<<std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout<<"?????"<<std::endl;
}

void		WrongAnimal::setType(std::string type)
{
	this->type = type;
}
std::string	WrongAnimal::getType() const
{
	return (this->type);
}

