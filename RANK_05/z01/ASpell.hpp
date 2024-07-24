#ifndef ASPELL_H
#define ASPELL_H

#include <string>
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	public:
		ASpell(std::string const& name, std::string const& effects);
		virtual	~ASpell(void);

		std::string const& getName(void) const;
		std::string const& getEffects(void) const;

		virtual ASpell* clone(void) const = 0;

		void			launch(ATarget const& r) const ;

	protected:
		std::string	_name;
		std::string	_effects;

	private:
		ASpell(void);
};

#endif
