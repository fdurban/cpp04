#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		
	public:
		Cure();
		~Cure();
		Cure(const Cure &copy);
		Cure &operator=(const Cure &copy);
		AMateria*	clone();
		void		use(ICharacter& target);
};
