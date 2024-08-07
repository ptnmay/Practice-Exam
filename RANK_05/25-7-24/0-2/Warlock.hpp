#pragma once

#include <string>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock
{
    private:
        std::string _name;
        std::string _title;

        SpellBook *_spellBook;

    public:
        Warlock(std::string const& name, std::string const& title);
        ~Warlock();

        std::string const& getName() const;
        std::string const& getTitle() const;

        void setTitle(std::string title);

        void introduce() const;

        void learnSpell(ASpell* r);
        void forgetSpell(std::string spN);
        void launchSpell(std::string spN, ATarget const& r);
};