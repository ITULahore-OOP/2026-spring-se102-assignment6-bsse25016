#ifndef GUILD_H
#define GUILD_H

#include <iostream>
#include <string>
#include "Hero.h"

using namespace std;

class Guild
{
    //attributes
    private:
        string guildName;
        Hero* roster[15];
        int memberCount;
    
    //member functions
    public:
        //Constructor and Destructor
        Guild(string name);
        ~Guild();

        int calculateTotalGuildPower();
        void displayGuildStats();

        //overloaded operators
        void operator+=(Hero* newHero);

        //friend function so it can access our private data and
        //because this cannot be a member function due to ostream being a seperate class
        friend ostream& operator<<(ostream& out,const Guild& g);

};
#endif