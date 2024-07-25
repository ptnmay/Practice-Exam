#pragma once

#include <map>
#include "ATarget.hpp"

class TargetGenerator
{
    public:
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget* type);
        void forgetTargetType(std::string const &type);
        ATarget* createTarget(std::string const &type);

    private:
        std::map<std::string, ATarget*> _targetBook;
};