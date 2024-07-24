#include "ATarget.hpp"

ATarget::ATarget(std::string const& type) : _type(type) {}
ATarget::~ATarget() {}

std::string const& ATarget::getType() const
{
    return (this->_type);
}

void ATarget::getHitBySpell(ASpell const &r)
{
    std::cout << this->_type << " has been " << r.getEffects() << "!" << std::endl;
}