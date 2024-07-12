#include "ASpell.hpp"

ASpell::ASpell(std::string const& name, std::string const& effects) :_name(name), _effects(effects) {}

ASpell::~ASpell(void) {}

// ASpell::ASpell(ASpell const& r) :_name(r.getName()), _effects(r.getEffects()) {
// 	*this = r;
// }

// ASpell& ASpell::operator=(ASpell const& r) {
// 	if (this != &r) {
// 		this->_name = r.getName();
// 		this->_effects = r.getEffects();
// 	}
// 	return (*this);
// }

std::string const& ASpell::getName(void) const {
	return (this->_name);
}

std::string const& ASpell::getEffects(void) const {
	return (this->_effects);
}

void			ASpell::launch(ATarget const& r) const {
	r.getHitBySpell(*this);
}