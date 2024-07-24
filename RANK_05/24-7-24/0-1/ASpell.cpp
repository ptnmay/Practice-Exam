#include "ASpell.hpp"

ASpell::ASpell(std::string const& name, std::string const& effects)
: _name(name), _effects(effects)
{

}

ASpell::~ASpell() {}

std::string const& ASpell::getEffects() const
{
    return (this->_effects);
}

std::string const& ASpell::getName() const
{
    return (this->_name);
}

void ASpell::launch(ATarget &r) const
{
    r.getHitBySpell(*this);
}