#include "Hero.h"

//Default constructor
Hero::Hero() {}

//Constructor and Destructor
Hero::Hero(string name, int hp, int bp)
{
    heroName = name;
    health = hp;
    basePower = bp;
}

Hero::~Hero()
{
    cout << "Hero has been destroyed!\n";
}

//Getters
string Hero::getName() const
{
    return heroName;
}

int Hero::getHealth() const
{
    return health;
}

int Hero::getPower() const
{
    return basePower;
}

//damage calc function
void Hero::takeDamage(int damage)
{
    //taking damage
    health -= damage;

    //making sure that health isnt negative
    if(health < 0)
        health = 0;
}

//overloaded operators
bool Hero::operator>(const Hero& other)
{
    //checking if this hero's power is greater than the other hero's
    if(this->basePower > other.basePower)
        return true;
    else
        return false;
}

//summing the health of this and the other hero
int Hero::operator+(const Hero& other)
{
    int sum = this->health + other.health;

    return sum;

}
