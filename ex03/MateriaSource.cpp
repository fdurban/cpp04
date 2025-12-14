#include "IMateriaSource.hpp"


MateriaSource::MateriaSource(): MateriaSource
{
	std::cout<<"MateriaSource Default constructor called"<<std::endl;
	for(int i = 0, i < 4, i++)
	{
		this->materia[i] = NULL; 
	}
}

MateriaSource::MateriaSource(MateriaSource &copy)
{
	std::cout<<"MateriaSource copy constructor called"<<std::endl;
	for(int i = 0; i < 4;i++)
	{
		if(copy.materia[i])
			this->materia[i] = copy.materia[i];
	}
}

MateriaSource::~MateriaSource()
{
	std::cout<<"MateriaSource Destructor Called"<<std::endl;
	for(int i = 0; i < 4; i++)
	{
		if(this->materia[i])
			delete this->materia[i];
	}
}

MateriaSource const &MateriaSource::operator=(MateriaSource const &copy)
{
	std::cout<<"MateriaSource equal operator called"<<std::endl;
	if(
}


