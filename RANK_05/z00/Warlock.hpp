#ifndef WARLOCK_H
#define WARLOCK_H

#include <string>
#include <iostream>

class Warlock
{
	public:
		Warlock(std::string const &name, std::string const& title);
		~Warlock(void);

		std::string const&	getName(void) const;
		std::string const&	getTitle(void) const;

		void				setTitle(std::string const& title);

		void 				introduce() const;

	private:
		std::string	_name;
		std::string	_title;

		Warlock(void);
		Warlock(Warlock const& r);
		Warlock& operator=(Warlock const& r);
};

#endif