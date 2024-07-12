
#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget(std::string const& type) : type(type) {}

std::string const& ATarget::getType() const {
	return (this->type);
}

std::string const& ATarget::getEffects() const {
	return (this->effects);
}

void ATarget::getHitBySpell(const ASpell& spell) const
{
	std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}


