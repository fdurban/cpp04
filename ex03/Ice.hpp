#include "AMAteria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	private:
		
	public:
		Ice();
		~Ice();
		Ice(const Ice &copy);
		Ice &operator=(const Ice &copy);
		AMAteria*	clone();
		void		use(ICharacter& target);
}
