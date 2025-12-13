#include "WrongCat.hpp"


WrongCat::WrongCat(): WrongAnimal()
{
	WrongAnimal::setType("WrongCat");
	std::cout<<"Default cat constructor called"<<std::endl;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other)
{
	std::cout<<"WrongCat copy constructor called"<<std::endl;
	*this = other;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	std::cout<<"WrongCat assignment operator called"<<std::endl;
	if(this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout<<"WrongCat destructor called"<<std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout<<"MEOOOOOOW"<<std::endl;
}
