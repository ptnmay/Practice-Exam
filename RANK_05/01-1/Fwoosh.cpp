#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("fwoosh", "fwooshed")
{}

Fwoosh::~Fwoosh() {}

ASpell* Fwoosh::clone() {
	return (new Fwoosh());
}
