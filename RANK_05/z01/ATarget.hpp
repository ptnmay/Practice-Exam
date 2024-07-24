#ifndef ATARGET_H
#define ATARGET_H

#include <string>
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	public:
		ATarget(std::string const& type);
		virtual	~ATarget(void);

		std::string const&	getType(void) const;

		virtual ATarget*	clone(void) const = 0;

		void				getHitBySpell(ASpell const& r) const;

	protected:
		std::string	_type;

	private:
		ATarget(void);
};

#endif
