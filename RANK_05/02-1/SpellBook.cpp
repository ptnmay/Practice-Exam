#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell* r)
{
	this->_spellBook[r->getName()] = r->clone();
}

void SpellBook::forgetSpell(std::string const & s)
{
	if (_spellBook.count(s))
		_spellBook.erase(s);
}

ASpell* SpellBook::createSpell(std::string const &s)
{
	if (this->_spellBook.find(s) != this->_spellBook.end())
		return (this->_spellBook[s]->clone());
	else
		return (NULL);
}

