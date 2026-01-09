#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout<<"Default constructor cure called"<<std::endl;
}

Cure::Cure(const Cure &copy): AMateria(copy)
{
	std::cout<<"Cure copy constructor called"<<std::endl;
	*this = copy; 
}

Cure&	Cure::operator=(const Cure &copy)
{
	if(this == &copy)
		return (*this);
	this->type = copy.type;
	return (*this);
}

Cure::~Cure()
{
	std::cout<<"Defaut Cure destructor called"<<std::endl;
}

AMateria*      Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout<<"* heals "<<target.getName()<<"'s wounds *"<<std::endl;
}
