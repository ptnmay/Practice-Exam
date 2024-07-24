#include "ATarget.hpp"

ATarget::ATarget(std::string const& type) :_type(type) {}

ATarget::~ATarget(void) {}

std::string const&	ATarget::getType(void) const {
	return (this->_type);
}

void				ATarget::getHitBySpell(ASpell const& r) const {
	std::cout << this->_type << " has been " << r.getEffects() << "!" << std::endl;
}