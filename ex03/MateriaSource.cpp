#include "IMateriaSource.hpp"


MateriaSource::MateriaSource(): MateriaSource
{
	std::cout<<"MateriaSource Default constructor called"<<std::endl;
}

MateriaSource::MateriaSource(MateriaSource &copy)
{
	std::cout<<"MateriaSource copy constructor called"<<std::endl;
}

MateriaSource::~MateriaSource()
{
	std::cout<<"MateriaSource Destructor Called"<<std::endl;
}

MateriaSource const &MateriaSource::operator=(MateriaSource const &copy)
{
	std::cout<<"MateriaSource equal operator called"<<std::endl;
}


