#ifndef WARRIOR_H
#define WARRIOR_H

#include "Hero.h"

class Warrior : public Hero 
{
    //attributes
    private:
        int armorRating;

    //member functions
    public:
        //Default constructor
        Warrior();
        //constructor
        Warrior(string name, int hp, int bp, int ar);
        
        //Getter
        int getArmor() const;

        int calculateEffectiveHealth();
};
#endif