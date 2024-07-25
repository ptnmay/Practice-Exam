#pragma once


#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class SpellBook
{
    public:
        SpellBook();
        ~SpellBook();

        void    learnSpell(ASpell *r);
        void    forgetSpell(std::string const &r);

        ASpell* createSpell(std::string const &r);
    
    private:
        std::map<std::string, ASpell*> _spellBook;
};