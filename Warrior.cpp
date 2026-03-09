#include "Warrior.h"

//Default constructor
Warrior::Warrior() {}

//constructor
Warrior::Warrior(string name, int hp, int bp, int ar)
    :Hero(name, hp, bp)
{
    armorRating = ar;
}
        
//Getter
int Warrior::getArmor() const
{
    return armorRating;
}

int Warrior::calculateEffectiveHealth()
{
    //calculating effective health by adding armor rating to health
    int effectiveHealth = getHealth() + (armorRating*2);

    return effectiveHealth;
}