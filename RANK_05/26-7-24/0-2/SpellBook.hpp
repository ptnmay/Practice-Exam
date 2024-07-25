#pragma once

#include <map>
#include "ASpell.hpp"

class SpellBook
{
    private:
        std::map<std::string, ASpell*> _spellBook;

    public:
        SpellBook();
        ~SpellBook();
        
        void learnSpell(ASpell* r);
        void forgetSpell(std::string const &r);
        ASpell* createSpell(std::string const &r);
};