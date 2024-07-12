#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall") {
	// ATarget("Target Practice BrickWall");
}

BrickWall::~BrickWall() {}

ATarget* BrickWall::clone()
{
	return (new BrickWall());
}
