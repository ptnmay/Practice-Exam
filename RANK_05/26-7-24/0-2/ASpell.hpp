#pragma once

#include <string>
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    protected:
        std::string _name;
        std::string _effects;
    
    public:
        ASpell(std::string const& name, std::string const& effects);
        ~ASpell();

        std::string const& getName() const;
        std::string const& getEffects() const;

        void launch(ATarget const &r) const;

        virtual ASpell* clone() const = 0;
};