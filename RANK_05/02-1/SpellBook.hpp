#pragma once
#include <map>
#include "ASpell.hpp"

class SpellBook
{
	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell* r);
		void forgetSpell(std::string const & s);
		ASpell* createSpell(std::string const &s);

		private:
		std::map<std::string, ASpell*> _spellBook;
			SpellBook& operator=(SpellBook const& r);
			SpellBook(SpellBook const& r);
};
