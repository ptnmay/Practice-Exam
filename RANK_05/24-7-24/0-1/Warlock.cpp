#include "Warlock.hpp"

Warlock::Warlock(std::string const& name, std::string const& title)
: _name(name), _title(title)
{
    std::cout << this->_name << ": This looks like another boring day." << std::endl;
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

void Warlock::setTitle(std::string const& title)
{
    this->_title = title;
}

void Warlock::introduce() const
{
    std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *r)
{
    this->_spellBook[r->getName()] = r->clone();
}

void Warlock::forgetSpell(std::string const& spName)
{
    if (_spellBook.count(spName))
        _spellBook.erase(spName);
}

void Warlock::launchSpell(std::string const& spName, ATarget &r)
{
    ASpell *sp = _spellBook[spName];
    if (sp)
        sp->launch(r);
}

