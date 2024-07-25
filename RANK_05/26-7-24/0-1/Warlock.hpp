#pragma once

#include <string>
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
    public:
        Warlock(std::string const& name, std::string const& title);
        ~Warlock();

        std::string const&  getName() const;
        std::string const&  getTitle() const;

        void                setTitle(std::string title);

        void                introduce() const;

        void learnSpell(ASpell* r);
        void forgetSpell(std::string spN);
        void launchSpell(std::string spN, ATarget const& r);
    
    private:
        std::string _name;
        std::string _title;

        std::map<std::string, ASpell*> _spellBook;
};