#include "Guild.h"
#include "Warrior.h"
#include "MagicalEntity.h"
#include "Knight.h"
#include "SpellBlade.h"

int main()
{   
    //declaring the objects here and giving them values later
    Hero* hero;
    Warrior* warrior;
    Knight* knight;
    SpellBlade* spellBlade;
    
    string name;
    cout << "Enter name of guild you wish to establish: ";
    getline(cin, name);
    Guild guild(name);

    cout << "Congratulations! " << name << " has been established!\n";
    
    int choice; bool running = true;
    while(running)
    {
        cout << "\t====Guild Management====\n";
        cout << "1 to add a Hero into the roster\n";
        cout << "2 to display guild status\n";
        cout << "3 to display whole roster of guild\n";
        cout << "0 to disband the guild\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                {
                    string name;
                    int heroChoice, hp, bp;
                    //getting name of the hero first
                    cout << "Enter the first name of the hero: ";
                    cin >> name;

                    //getting hero of user's choice
                    cout << "1 for basic Hero\n";
                    cout << "2 for a Warrior\n";
                    cout << "3 for a Knight\n";
                    cout << "4 for a spellblade\n";
                    cout << "Enter your choice: ";
                    cin >> heroChoice;

                    cout << "Enter health of your hero: ";
                    cin >> hp;
                    cout << "Enter basic power of your hero: ";
                    cin >> bp;

                    if(heroChoice == 1)
                    {   //adding basic hero
                        Hero* h = new Hero(name, hp, bp);
                        hero = h;
                        guild += hero;
                    }
                    else if(heroChoice == 2)
                    {
                        //adding warrior
                        int ar;
                        cout << "Enter the armor rating of your warrior: ";
                        cin >> ar;
                        Warrior* w = new Warrior(name, hp, bp, ar);
                        warrior = w;
                        guild += warrior;
                    }
                    else if(heroChoice == 3)
                    {
                        //adding knight
                        int ar, cb;
                        cout << "Enter armor rating of Knight: ";
                        cin >> ar;
                        cout << "Enter the charge bonus of your knight: ";
                        cin >> cb;
                        Knight* k = new Knight(name, hp, bp, ar, cb); 
                        knight = k;
                        guild += knight;
                    }
                    else if(heroChoice == 4)
                    {
                        //adding spellblade
                        int sp, mp;
                        cout << "Enter the spellpower of your spellblade: ";
                        cin >> sp;
                        cout << "Enter the manapool of your spellblade: ";
                        cin >> mp; 
                        SpellBlade* sb= new SpellBlade(name, hp, bp, 0, sp, mp); 
                        spellBlade = sb;
                        guild += spellBlade;
                    }
                    else
                    {
                        cout << "Invalid INput!\n";
                        continue;
                    }
                    break;
                }
            case 2:
                {
                    //display guild stats
                    guild.displayGuildStats();
                    break;
                }
            case 3:
                {
                    cout << guild; //our overloaded operator
                    break;
                }
            case 0:
                {
                    running = false;
                    break;
                }
        }
    }
    return 0;
}