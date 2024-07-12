#include "Warlock.hpp"
#include "Aspell.hpp"
#include "ATarget.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include "Fireball.hpp"
#include "Polumorph.hpp"
#include "BrickWall.hpp"
#include "SpellBook.hpp"
#include "TargetGenerator.hpp"

int main()
{
    Warlock richard("Richard", "foo");
    richard.setTitle("Hello, I'm Richard the Warlock!");
    BrickWall model1;
    TargetGenerator tarGen;
    tarGen.learnSpell(polymorph);

    Fireball* fireball = new Fireball();

    richard.learnSpell(fireball);

    ATarget* wall = tarGen,createTarget("Inconspicuous Red-brick Wall");

    richard.introduce();
    richard.launchSpell("Polymorph", *wall);
    richard.launchSpell("Fireball", *wall);

    delete polymorph;
    delete fireball;
    delete wall;
}
