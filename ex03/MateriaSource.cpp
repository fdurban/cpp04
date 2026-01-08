#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
	std::cout<<"MateriaSource Default constructor called"<<std::endl;
	for(int i = 0; i < 4; i++)
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
	if(this != &copy)
	{
		for(int i = 0; i < 4; i++)
		{
			if(this->materia[i] != NULL)
			{
				delete this->materia[i];
				this->materia[i] = copy.materia[i] ? copy.materia[i]->clone() : 0;
			}
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* materia)
{
	for(int i=0; i < 4; i++)
	{
		if(materia && this->materia[i] == NULL)
		{
			this->materia[i] = materia;
			return;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for(int i=0; i < 4; i++)
	{
		if(this->materia[i] && this->materia[i]->getType() == type)
		{
			return (this->materia[i]->clone());
		}
	}
	return (NULL);
}
