#ifndef WARLOCK_H
#define WARLOCK_H

#include <string>
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
	public:
		Warlock(std::string const &name, std::string const& title);
		~Warlock(void);

		std::string const&	getName(void) const;
		std::string const&	getTitle(void) const;

		void	setTitle(std::string const& title);

		void 	introduce() const;

		void	learnSpell(ASpell* r);
		void	forgetSpell(std::string const &spellName);
		void	launchSpell(std::string const &spellName, ATarget const& r);

	private:
		std::string	_name;
		std::string	_title;

		std::map<std::string, ASpell*>	_spellBook;

		Warlock(void);
		Warlock(Warlock const& r);
		Warlock& operator=(Warlock const& r);
};

#endif