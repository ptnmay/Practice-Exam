#include "SpellBook.hpp"

SpellBook::SpellBook(void) {}

SpellBook::~SpellBook(void) {
	std::map<std::string, ASpell*>::iterator	it = this->_spellBook.begin();
	while (it != this->_spellBook.end()) {
		delete it->second;
		it++;
	}
}

void	SpellBook::learnSpell(ASpell* r) {
	if (r != NULL) {
		this->_spellBook[r->getName()] = r->clone();
	}
}

void	SpellBook::forgetSpell(std::string const& r) {
	if (this->_spellBook.find(r) != this->_spellBook.end()) {
		this->_spellBook.erase(r);
	}
}

ASpell*	SpellBook::createSpell(std::string const& r) {
	if (this->_spellBook.find(r) != this->_spellBook.end()) {
		return (this->_spellBook[r]->clone());
	}
	else
		return (NULL);
}
