#ifndef SPELLBOOK_H
#define SPELLBOOK_H

#include <map>
#include "ASpell.hpp"

class SpellBook
{
	public:
		SpellBook(void);
		~SpellBook(void);

		void	learnSpell(ASpell* r);
		void	forgetSpell(std::string const& r);
		ASpell*	createSpell(std::string const& r);

	private:
		std::map<std::string, ASpell*>	_spellBook;

		SpellBook(SpellBook const& r);
		SpellBook& operator=(SpellBook const& r);
};

#endif