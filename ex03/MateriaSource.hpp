#include "IMateria.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria *materia[4];
	public:
	MateriaSource();
	MateriaSource(MateriaSource &copy);
	~MateriaSource();
	MateriaSource const &operator=(MateriaSource const &copy);
	void	learnMateria(AMateria*);
	AMateria	*createMateria(std::string const &type);
}
