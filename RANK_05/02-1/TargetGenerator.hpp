#pragma once
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget* r);
		void forgetTargetType(std::string const &r);
		ATarget* createTarget(std::string const &r);

	private:
		std::map<std::string, ATarget*> _targetBook;

		TargetGenerator(TargetGenerator const& r);
		TargetGenerator& operator=(TargetGenerator const& r);
};
