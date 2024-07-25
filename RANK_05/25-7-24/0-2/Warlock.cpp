#include "Warlock.hpp"

Warlock::Warlock(std::string const& name, std::string const& title)
: _name(name), _title(title)
{
    std::cout << this->_name << ": This looks like another boring day." << std::endl;
    _spellBook = new SpellBook;
}

Warlock::~Warlock()
{
    std::cout << this->_name << ": My job here is done!" << std::endl;
}

std::string const& Warlock::getName() const
{
    return (this->_name);
}

std::string const& Warlock::getTitle() const
{
    return (this->_title);
}


void Warlock::setTitle(std::string title)
{
    this->_title = title;
}

void Warlock::introduce() const
{
    std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* r)
{
    this->_spellBook->learnSpell(r);
}

void Warlock::forgetSpell(std::string spN)
{
    this->_spellBook->forgetSpell(spN);
}

void Warlock::launchSpell(std::string spN, ATarget const& r)
{
    ASpell *sp = this->_spellBook->createSpell(spN);
    if (sp != NULL)
        sp->launch(r);
}
