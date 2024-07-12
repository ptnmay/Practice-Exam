#pragma once

#include <iostream>
#include <string>

class ASpell;

class ATarget
{
		protected:
			std::string type;
			std::string effects;

		public:
			ATarget(std::string const& type);
			std::string const& getType() const;
			std::string const& getEffects() const;

			void getHitBySpell(const ASpell& spell) const;
			virtual ATarget* clone() = 0;
};
