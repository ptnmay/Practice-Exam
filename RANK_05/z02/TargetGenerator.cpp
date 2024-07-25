#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void) {}

TargetGenerator::~TargetGenerator(void) {}

void		TargetGenerator::learnTargetType(ATarget* r) {
	if (r != NULL) {
		this->_targetBook[r->getType()] = r->clone();
	}
}

void		TargetGenerator::forgetTargetType(std::string const& r) {
	if (this->_targetBook.find(r) != this->_targetBook.end()) {
		this->_targetBook.erase(r);
	}
}

ATarget*	TargetGenerator::createTarget(std::string const& r) {
	if (this->_targetBook.find(r) != this->_targetBook.end()) {
		return (this->_targetBook[r]->clone());
	}
	else
		return (NULL);
}
