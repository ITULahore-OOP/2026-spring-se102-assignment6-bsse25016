#include "Spellblade.h"

//Default constructor
SpellBlade::SpellBlade() {}

//constructor that initializes both Warrior constructor and
//MagicalEntity constructor
SpellBlade::SpellBlade(string name, int hp, int bp, int ar, int sp, int mp)
    :Warrior(name, hp, bp, ar), MagicalEntity(sp, mp)
{
}

//damage calculator
int SpellBlade::calculateHybridDamage()
{
    //summing power and spellpower to get hybrid damage
    int hybridDamage = getPower() + getSpellPower();

    return hybridDamage;
}
