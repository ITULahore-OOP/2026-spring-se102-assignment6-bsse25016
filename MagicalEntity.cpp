#include "MagicalEntity.h"

//Default constructor
MagicalEntity::MagicalEntity() {}

//Constructor
MagicalEntity::MagicalEntity(int sp, int mp)
{
    spellPower = sp;
    manaPool = mp;
}

//Getters
int MagicalEntity::getMana() const
{
    return manaPool;
}

int MagicalEntity::getSpellPower() const
{
    return spellPower;
}