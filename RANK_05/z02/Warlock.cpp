#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const& title) : _name(name), _title(title) {
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
	_spellBook = new SpellBook;
}

Warlock::~Warlock(void) {

	std::cout << this->_name << ": My job here is done!" << std::endl;
}

std::string const&	Warlock::getName(void) const {
	return (this->_name);
}

std::string const&	Warlock::getTitle(void) const {
	return (this->_title);
}

void		Warlock::setTitle(std::string const& title) {
	this->_title = title;
}

void 		Warlock::introduce() const {
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}

void		Warlock::learnSpell(ASpell* r) {

	this->_spellBook->learnSpell(r);
}

void		Warlock::forgetSpell(std::string const &spellName) {

	this->_spellBook->forgetSpell(spellName);
}

void		Warlock::launchSpell(std::string const &spellName, ATarget const& r) {

	ASpell	*s = this->_spellBook->createSpell(spellName);
	if (s != NULL) {
		s->launch(r);
		delete	s;
	}
}
