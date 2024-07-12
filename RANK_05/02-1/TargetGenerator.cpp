#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void TargetGenerator::learnTargetType(ATarget* r)
{
	this->_targetBook[r->getType()] = r->clone();
}

void TargetGenerator::forgetTargetType(std::string const& r)
{
	if (_targetBook.count(r))
		_targetBook.erase(r);
}

ATarget* TargetGenerator::createTarget(std::string const& r)
{
	if (_targetBook.find(r) != _targetBook.end())
		return (this->_targetBook[r]->clone());
	else
		return (NULL);
}
