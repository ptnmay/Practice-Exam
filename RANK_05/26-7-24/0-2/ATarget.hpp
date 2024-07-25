#pragma once

#include <string>
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    protected:
        std::string _type;

    public:
        ATarget(std::string const& type);
        ~ATarget();

        std::string const&  getType() const;

        void                getHitBySpell(ASpell const& r) const;

        virtual ATarget* clone() const = 0;
};