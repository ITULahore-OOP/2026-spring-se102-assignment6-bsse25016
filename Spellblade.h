#ifndef SPELLBLADE_H
#define SPELLBLADE_H

#include "Warrior.h"
#include "MagicalEntity.h"

class SpellBlade: public Warrior, public MagicalEntity
{
   //constructor and one member function
    public:
        SpellBlade();
        SpellBlade(string name, int hp, int bp, int ar, int sp, int mp);
        int calculateHybridDamage();
};
#endif