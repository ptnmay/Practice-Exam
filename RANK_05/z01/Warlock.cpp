#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const& title) : _name(name), _title(title) {
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void) {
	std::map<std::string, ASpell*>::iterator	it = this->_spellBook.begin();
	while (it != this->_spellBook.end()) {
		delete it->second;
		it++;
	}

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
		this->_spellBook[r->getName()] = r->clone();
}

void		Warlock::forgetSpell(std::string const &spellName) {
	if (_spellBook.count(spellName))
		_spellBook.erase(spellName);
	// if (this->_spellBook.find(spellName) != this->_spellBook.end()) {
	// 	this->_spellBook.erase(spellName);
	// }
}

void		Warlock::launchSpell(std::string const &spellName, ATarget const& r) {
	// if (this->_spellBook.find(spellName) != this->_spellBook.end()) {
	// 	//This way short bug leaks
	// 	//this->_spellBook[spellName]->launch(r);

	// 	// No leaks
	// 	ASpell	*s = this->_spellBook[spellName];
	// 	s->launch(r);
	// 	delete s;
	// }
	ASpell *sp = _spellBook[spellName];
	if (sp)
		sp->launch(r);
	// _spellBook[spellName]->launch(r);
}