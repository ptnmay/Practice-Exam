#pragma once

#include <string>
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
    private:
        std::string _name;
        std::string _title;
        std::map<std::string, ASpell*> _spellBook;

    public:
        Warlock(std::string const& name, std::string const& title);
        ~Warlock();
        
        std::string const& getName() const;
        std::string const& getTitle() const;

        void setTitle(std::string const& title);

        void introduce() const;

        void learnSpell(ASpell *r);
        void forgetSpell(std::string const& spN);
        void launchSpell(std::string const& spN, ATarget const& r);
};