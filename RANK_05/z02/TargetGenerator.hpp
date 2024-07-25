#ifndef TARGETGENERATOR_H
#define TARGETGENERATOR_H

#include <map>
#include "ATarget.hpp"

class TargetGenerator
{
	public:
		TargetGenerator(void);
		~TargetGenerator(void);

		void		learnTargetType(ATarget* r);
		void		forgetTargetType(std::string const& r);
		ATarget*	createTarget(std::string const& r);

	private:
		std::map<std::string, ATarget*>	_targetBook;
};

#endif