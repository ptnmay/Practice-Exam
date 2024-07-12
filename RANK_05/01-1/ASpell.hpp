#pragma once

#include <string>
#include <iostream>

class ATarget;

class ASpell
{
	protected:
		std::string name;
		std::string effects;

	public:
		ASpell(std::string name, std::string effects);
		std::string getName() const;
		std::string getEffects() const;

		void launch(const ATarget& target);
		virtual ASpell* clone() = 0;

};
