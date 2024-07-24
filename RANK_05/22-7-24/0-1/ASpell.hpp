#pragma once

#include <string>
#include <iostream>

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

        virtual ASpell& clone();
};