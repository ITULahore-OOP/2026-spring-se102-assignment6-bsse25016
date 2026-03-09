#include "Knight.h"

//Default constructor
Knight::Knight() {}

//constructor
Knight::Knight(string name, int hp, int bp, int ar, int cb)
    :Warrior(name, hp, bp, ar)
{
    chargeBonus = cb;
}

//Getter
int Knight::getChargeBonus() const
{
    return chargeBonus;
}

//calculating damage of the knight
int Knight::calculateBurstDamage()
{
    //summing base power with the charge bonus to get damage of knight
    int burstDamage = getPower() + chargeBonus;

    return burstDamage;
}