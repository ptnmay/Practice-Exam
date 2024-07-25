#pragma once

#include <map>
#include "ATarget.hpp"

class TargetGenerator
{
    private:
        std::map<std::string, ATarget*> _targetBook;

    public:
        TargetGenerator();
        ~TargetGenerator();
        
        void learnTargetType(ATarget* r);
        void forgetTargetType(std::string const &r);
        ATarget* createTarget(std::string const &r);
};