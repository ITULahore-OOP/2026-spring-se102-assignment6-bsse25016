#include "Guild.h"

//Constructor and Destructor
Guild::Guild(string name)
{
    guildName = name;
    memberCount = 0;
}

Guild::~Guild()
{
    for(int i = 0 ; i < memberCount ; i++)
        delete roster[i];
    
    //displaying message
    cout << "The guild " << guildName << " has been disbanded!\n"; 
}

int Guild::calculateTotalGuildPower()
{
    int totalPower = 0;
    for(int i = 0 ; i < memberCount ; i++)
        totalPower += roster[i]->getPower();
    
    return totalPower;
}

void Guild::displayGuildStats()
{
    /* should display like this:
    Guild Name: Valor
    Total Members: 2/15 
    Total Guild Power: 110
    */
   cout << "Guild Name: " << guildName << "\n";
   cout << "Total Members: " << memberCount << "/15\n";
   cout << "Total Guild Power: " << calculateTotalGuildPower() << "\n";
   
}

//overloaded operators
void Guild::operator+=(Hero* newHero)
{
    //checking if guild is full or not
    if(!(memberCount<15))
    {   
        cout << "Guild is at full capacity!\n";
        return;
    }
    //adding newHero if guild isnt full
    roster[memberCount] = new Hero(*newHero);
    memberCount++;
    
}

//our friend fuction
ostream& operator<<(ostream& out,const Guild& g)
{
    out << "Guild: " << g.guildName << "\n";
    out << "Members: " << g.memberCount << "\n";

    for(int i = 0 ; i < g.memberCount ; i++)
    {   //"- Eomer (Power: 80)" <-should print like this
        out << "- " << g.roster[i]->getName() << " (Power: " << g.roster[i]->getPower() << ")"
        << "\n";
    }
    return out;
}
