#pragma once

#include <string>
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "SpellBook.hpp"

class Warlock
{
	private:
		std::string _name;
		std::string _title;
		SpellBook* Spellbook;

		Warlock();
		Warlock(Warlock const& r);
		Warlock& operator=(Warlock const& r);

	public:
		Warlock(std::string const& name, std::string const& title);
		~Warlock();
		std::string const& getName() const;
		std::string const& getTitle() const;
		void setTitle(std::string const &title);
		void introduce() const;

		void learnSpell(ASpell *r);
		void forgetSpell(std::string const& spell);
		void launchSpell(std::string const& spell, ATarget const& r);
};
