#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>
//#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock
{
    public:
        Warlock(std::string const &name, std::string const& title);
        ~Warlock();

        std::string const& getName() const;
        std::string const& getTitle() const;

        void setTile(std::string const& title);

        void introduce() const;

        void learnSpell(ASpell* r);
        void forgetSpell(std::string const &spellName);
        void launchSpell(std::string const &spellName, ATarget const& r);
    private:
        std::string _name;
        std::string _title;

        Warlock();
        Warlock(Warlock const& r);
        Warlock& operator=(Warlock const& r);
}