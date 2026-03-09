#ifndef KNIGHT_H
#define KNIGHT_H

#include "Warrior.h"

class Knight: public Warrior
{
    //attributes
    private:
        int chargeBonus;
    
    //member functions
    public:
        Knight();
        //constructor
        Knight(string name, int hp, int bp, int ar, int cb);

        //Getter
        int getChargeBonus() const;

        int calculateBurstDamage();
};
#endif