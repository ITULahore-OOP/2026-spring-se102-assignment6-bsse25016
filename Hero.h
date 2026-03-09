#ifndef HERO_H
#define HERO_H

#include <iostream>
#include <string>

using namespace std;

class Hero
{
    //attributes
    private:
        string heroName;
        int health;
        int basePower;

    //member functions
    public:
        Hero();
        //Constructor and Destructor
        Hero(string name, int hp, int bp);
        ~Hero();

        //Getters
        string getName() const;
        int getHealth() const;
        int getPower() const;

        void takeDamage(int damage);

        //overloaded operators
        bool operator>(const Hero& other);
        int operator+(const Hero& other);

};
#endif