#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator() {}

void        TargetGenerator::learnTargetType(ATarget* type)
{
    this->_targetBook[type->getType()] = type->clone();
}

void        TargetGenerator::forgetTargetType(std::string const &type)
{
    if (this->_targetBook.count(type))
        this->_targetBook.erase(type);
}

ATarget*    TargetGenerator::createTarget(std::string const &type)
{
    if (this->_targetBook.count(type))
        return (this->_targetBook[type]->clone());
    else
        return (NULL);
}
