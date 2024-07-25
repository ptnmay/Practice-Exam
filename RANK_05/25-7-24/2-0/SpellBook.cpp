#include "SpellBook.hpp"

SpellBook::SpellBook() {}
SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell* r)
{
    this->_spellBook[r->getName()] = r->clone();
}

void SpellBook::forgetSpell(std::string const& spN)
{
    if (_spellBook.count(spN))
        _spellBook.erase(spN);
}

ASpell* SpellBook::createSpell(std::string const &r)
{
    if (this->_spellBook.count(r))
        return (this->_spellBook[r]->clone());
    else
        return (NULL);
}