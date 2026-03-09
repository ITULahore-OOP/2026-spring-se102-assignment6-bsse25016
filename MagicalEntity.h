#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H

class MagicalEntity
{
    //attributes
    private:
        int spellPower;
        int manaPool;
    
    //member functions
    public:
        MagicalEntity();
        //constructor
        MagicalEntity(int sp, int mp);

        //Getters
        int getMana() const;
        int getSpellPower() const;
};
#endif