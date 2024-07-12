#include "ATarget.hpp"

ATarget::ATarget(std::string const& type) :_type(type) {}

ATarget::~ATarget(void) {}

// ATarget::ATarget(ATarget const& r) :_type(r.getType()) {
// 	*this = r;
// }

// ATarget& ATarget::operator=(ATarget const& r) {
// 	if (this != &r) {
// 		this->_type = r.getType();
// 	}
// 	return (*this);
// }

std::string const&	ATarget::getType(void) const {
	return (this->_type);
}

void				ATarget::getHitBySpell(ASpell const& r) const {
	std::cout << this->_type << " has been " << r.getEffects() << "!" << std::endl;
}