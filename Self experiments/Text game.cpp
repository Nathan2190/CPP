#include <bits/stdc++.h>

using namespace std;

int main() {
    int responce, rounds;
    int health = 100;
    int hunger = 100;
    int money = 500;
    int generation, lootyn, r_potion, rod, rope;
    int s_generation, r_money, r_health, r_hunger, potion, town_g, town_r;
    cout << "Welcome to whatever this game is! Your goal is to survive as long as you can" << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "respond 1 to start, say 2 to leave " << endl;
    cin >> responce;
    if (responce == 2)
    {
        cout << "bye bye" << endl;
        exit;
    }   
    if (responce == 1)
    {
        cout << "----------------------------------------------------------------------------" << endl;
        cout << "How many round would you like to set your survival goal as? (Input a number)" << endl;
        cin >> rounds;
        cout << "Okay, " << rounds << " rounds it is then." << endl;
        cout << "----------------------------------------------------------------------------" << endl;
        cout << "But first, would you like to read the rules?" << endl;
        cout << "1: yes" << endl;
        cout << "2: No" << endl;
        cin >> responce;
        if (responce == 1)
        {
            cout << "You will encounter many dangerous and unknown events, try to survive as long as you can" << endl;
            cout << "There is a money system that you can toggle when notified by typing 0" << endl;
            cout << "The deeper you explore, the harder the game gets" << endl;
            cout << "There is no maximum for hunger and health" << endl;
            cout << "ANY INPUT THAT IS NOT A NUMBER WILL RESULT IN CRASH" << endl;
            cout << "Keybinds: 1~4 are the available options, 5 is healing potion(can only be used in town), 0 is shop(town exclusive)" << endl;
            cout << "A original work by WaterLemon, all rights reserved" << endl;
            cout << "When you are ready, prompt anything to start" << endl;
            cin >> responce;
        }
        if (responce == 2)
        {
            for (int i = 1; i < rounds; i++)
            {
                town_g += rand() % 10 + 1;
                town_r += rand() % 3 + 1;
                if(health <= 0)
                {
                    cout << "You suffered with no health left" << endl;
                    cout << "Score: " << i << " rounds" << endl;
                    cout << "Ending: out of health" << endl;
                    break;
                }
                if(hunger <= 0)
                {
                    cout << "Find something to eat! you are losing 5 HP every turn now!" << endl;
                    health -= 5;
                }
                cout << "When you are ready, prompt any number to continue" << endl;
                cin >> responce;
                generation = rand() % 4 + 1;
                if (generation == 1)
                {
                    cout << "round " << i << " , you found a lake" << endl;
                    cout << "------------------------------------" << endl;
                    cout << "HP: " << health << "  " << "Hunger: " << hunger << "  " << "Money: " << money << endl;
                    cout << "------------------------------------" << endl;
                    cout << "Interactions:" << endl;
                    cout << "1: Fish with rod [Rod required]" << endl;
                    cout << "2: Go in the lake to catch fish" << endl;
                    cout << "3: Resting(No action)" << endl;
                    cin >> responce;
                    if (responce == 1)
                    {
                        if (rod == 1)
                        {
                        
                            s_generation = rand() % 5 + 1;
                            if (s_generation == 1 || s_generation == 2)
                            {
                                cout << "You caught a fish" << endl;
                                cout << "------------------------------" << endl;
                                r_hunger = rand() % 10 + 1;
                                cout << "hunger +" << r_hunger << endl;
                                hunger += r_hunger;
                            }
                            if (s_generation == 3)
                            {
                                cout << "You caught a very big fish, it contains some loot in it!" << endl;
                                cout << "--------------------------------------------------------" << endl;
                                r_money = rand() % 90 + 10;
                                cout << "Money +" << r_money << endl;
                                r_hunger = rand() % 15 + 5;
                                cout << "hunger +" << r_hunger << endl;
                                money += r_money;
                                hunger += r_hunger;
                            }
                            if (s_generation == 4 || s_generation == 5)
                            {
                                cout << "No fish were caught" << endl;
                            }
                        }
                        if (rod == 0)
                        {
                            cout << "You need a rod!(You took a break instead)" << endl;
                            cout << "-----------------------------------------" << endl;
                            cout << "health +5" << endl;
                            health += 5;
                        }
                        
                    }
                    if (responce == 2)
                    {
                        s_generation = rand() % 5 + 1;
                        if (s_generation == 1 || s_generation == 2)
                        {
                            cout << "You caught a fish and ate it" << endl;
                            cout << "----------------------------" << endl;
                            r_hunger = rand() % 15 + 5;
                            cout << "hunger +" << r_hunger << endl;
                            hunger += r_hunger;
                        }
                        if (s_generation == 3)
                        {
                            cout << "You found a treasure but you were hurt while escaping from the gurdian" << endl;
                            r_money = rand() % 150 + 50;
                            r_health = rand() % 15 + 5;
                            r_hunger = rand() % 20 + 10;
                            cout << "----------------------------------------------------------------------" << endl;
                            cout << "money +" << r_money << endl;
                            cout << "health -" << r_health << endl;
                            cout << "hunger -" << r_hunger << endl;
                            money += r_money;
                            health -= r_health;
                            hunger -= r_hunger;
                        }
                        if (s_generation == 4 || s_generation == 5)
                        {
                            cout << "You found nothing" << endl;
                            cout << "------------------------------" << endl;
                            r_hunger = rand() % 20 + 1;
                            cout << "hunger -" << r_hunger << endl;
                            hunger -= r_hunger;
                        }    
                    }
                    if (responce == 3)
                    {
                        cout << "You took a break and regained some HP" << endl;
                        cout << "-------------------------------------" << endl;
                        cout << "HP +5" << endl;
                        health += 5;
                    }



                }
                if (generation == 2)
                {
                    cout << "round " << i << " , encountered a slime" << endl;
                    cout << "------------------------------------" << endl;
                    cout << "HP: " << health << "  " << "Hunger: " << hunger << "  " << "Money: " << money << endl;
                    cout << "------------------------------------" << endl;
                    cout << "Interactions:" << endl;
                    cout << "1: Attack" << endl;
                    cout << "2: Defend" << endl;
                    cout << "3: Run away" << endl;
                    cin >> responce;
                    if (responce == 1)
                    {
                        cout << "You teared the slime into pieces it drpped some good loots" << endl;
                        cout << "----------------------------------------------------------" << endl;
                        lootyn = rand() % 5 + 1;
                        if (lootyn == 2 || lootyn == 3 ||lootyn == 4 || lootyn == 5)
                        {
                            r_money = rand() % 100 + 1;
                            r_health = rand() % 10 + 5;
                            r_hunger = rand() % 15 + 5;
                            cout << "money +" << r_money << endl;
                            cout << "health -" << r_health << endl;
                            cout << "hunger -" << r_hunger << endl;
                            money += r_money;
                            health -= r_health;
                            hunger -= r_hunger;
                        }
                        
                        if (lootyn == 1)
                        {
                            cout << "You realize that you defeated a gold slime!" << endl;
                            cout << "-------------------------------------------" << endl;
                            r_money = rand() % 300 + 50;
                            r_health = rand() % 10 + 5;
                            r_hunger = rand() % 15 + 5;
                            r_potion = rand() % 2 + 1;
                            cout << "money +" << r_money << endl;
                            cout << "health potion +" << r_potion << endl;
                            cout << "health -" << r_health << endl;
                            cout << "hunger -" << r_hunger << endl;
                            money += r_money;
                            health -= r_health;
                            hunger -= r_hunger;
                            potion += r_potion;
                        }
                        

                    }
                    if (responce == 2)
                    {
                        cout << "You defended yourself and slime left after realizing it can't kill you" << endl;
                        cout << "----------------------------------------------------------------------" << endl;
                        r_health = rand() % 4 + 1;
                        r_hunger = rand() % 20 + 5;
                        cout << "health -" << r_health << endl;
                        cout << "hunger -" << r_hunger << endl;
                        health -= r_health;
                        hunger -= r_hunger;

                    }
                    if (responce == 3)
                    {
                        cout << "escaped" << endl;
                        r_hunger = rand() % 15 + 5;
                        cout << "hunger -" << r_hunger << endl;
                        hunger -= r_hunger;
                    }
                    
                }
                if (generation == 3)
                {
                    cout << "round " << i << " , you found a fruit tree" << endl;
                    cout << "------------------------------------" << endl;
                    cout << "HP: " << health << "  " << "Hunger: " << hunger << "  " << "Money: " << money << endl;
                    cout << "------------------------------------" << endl;
                    cout << "Interactions:" << endl;
                    cout << "1: Climb the tree to get fruit" << endl;
                    cout << "2: Use rope to get the fruit [Rope required]" << endl;
                    cout << "3: Resting(No action)" << endl;
                    cin >> responce;
                    if(responce == 1)
                    {
                        s_generation = rand() % 3 + 1;
                        if (s_generation == 1)
                        {
                            cout << "You got some fruit from the tree" << endl;
                            cout << "----------------------------" << endl;
                            r_hunger = rand() % 20 + 1;
                            cout << "hunger +" << r_hunger << endl;
                            hunger +=  r_hunger;
                        }
                        if (s_generation == 2)
                        {
                            cout << "There is a beehive on the tree and you got stung by bees" << endl;
                            r_health = rand() % 15 + 5;
                            r_hunger = rand() % 20 + 1;
                            cout << "----------------------------------------------------------------------" << endl;
                            cout << "health -" << r_health << endl;
                            cout << "hunger +" << r_hunger << endl;
                            health -= r_health;
                            hunger += r_hunger;
                        }
                        if (s_generation == 3)
                        {
                            cout << "You fell down the tree while climbing" << endl;
                            cout << "------------------------------" << endl;
                            r_health = rand() % 10 + 10;
                            cout << "health -" << r_health << endl;
                            health -= r_health;
                        }
                    }
                    if(responce == 2)
                    {
                        if (rope == 1)
                        {
                        
                            s_generation = rand() % 5 + 1;
                            if (s_generation == 1 || s_generation == 2)
                            {
                                cout << "You climbed up the tree and got plenty of fruit" << endl;
                                cout << "-----------------------------------------------" << endl;
                                r_hunger = rand() % 30 + 1;
                                cout << "hunger +" << r_hunger << endl;
                                hunger +=  r_hunger;
                            }
                            if (s_generation == 3)
                            {
                                cout << "You found a beehive and collected some honey from the hive" << endl;
                                cout << "--------------------------------------------------------" << endl;
                                r_hunger = rand() % 20 + 5;
                                r_potion = rand() % 2 + 1;
                                cout << "health r_r_potion +" << r_potion << endl;
                                cout << "hunger -" << r_hunger << endl;
                            }
                            if (s_generation == 4 || s_generation == 5)
                            {
                                cout << "The fruits were rotten" << endl;
                            }
                        }
                        if (rod == 0)
                        {
                            cout << "You need to buy a rope first!(You took a break instead)" << endl;
                            cout << "-----------------------------------------" << endl;
                            cout << "health +5" << endl;
                            health += 5;
                        }
                    }
                    if (responce == 3)
                    {
                        cout << "You took a break and regained some HP" << endl;
                        cout << "-------------------------------------" << endl;
                        cout << "HP +5" << endl;
                        health += 5;
                    }

                }


                if (generation == 4)
                {
                    cout << "round " << i << " , you found a abandoned shack" << endl;
                    cout << "------------------------------------" << endl;
                    cout << "HP: " << health << "  " << "Hunger: " << hunger << "  " << "Money: " << money << endl;
                    cout << "------------------------------------" << endl;
                    cout << "Interactions:" << endl;
                    cout << "1: Enter it and loot[1/5 chance of death]" << endl;
                    cout << "2: Take a break inside[1/5 chance of death]" << endl;
                    cout << "3: Ignore" << endl;
                    cout << "4: Take a break(No action)" << endl;
                    cin >> responce;
                    if(responce == 1)
                    {
                        s_generation = rand() % 5 + 1;
                        if (s_generation == 1)
                        {
                            cout << "You got some food and money" << endl;
                            cout << "----------------------------" << endl;
                            r_hunger = rand() % 35 + 1;
                            cout << "hunger +" << r_hunger << endl;
                            hunger +=  r_hunger;
                            r_money = rand() % 100 + 1;
                            cout << "money +" << r_money << endl;
                            money +=  r_money;
                        }
                        if (s_generation == 2)
                        {
                            cout << "There is a monster living inside, you were slain" << endl;
                            cout << "Score: " << i << " rounds" << endl;
                            cout << "Ending: slained" << endl;
                            break;
                        }
                        if (s_generation == 3 || s_generation == 4 || s_generation == 5)
                        {
                            cout << "It was empty" << endl;
                            cout << "------------------------------" << endl;
                            r_hunger = rand() % 15 + 1;
                            cout << "hunger -" << r_hunger << endl;
                            hunger -=  r_hunger;
                        }
                    }
                    if(responce == 2)
                    {
                    
                        s_generation = rand() % 3 + 1;
                        if (s_generation == 1 || s_generation == 2)
                        {
                            cout << "You took a long break inside the shack" << endl;
                            cout << "-----------------------------------------------" << endl;
                            r_health = rand() % 40 + 1;
                            cout << "health +" << r_health << endl;
                            health +=  r_health;
                        }
                        if (s_generation == 3)
                        {
                            cout << "You were slained in your dream by a monster" << endl;
                            cout << "Score: " << i << " rounds" << endl;
                            cout << "Ending: slained" << endl;
                            break;
                        }
                    }
                    if (responce == 3)
                    {
                        cout << "You ignored it and went on" << endl;
                    }
                    if (responce == 4)
                    {
                        cout << "You took a break and regained some HP" << endl;
                        cout << "-------------------------------------" << endl;
                        cout << "HP +5" << endl;
                        health += 5;
                    }
                }
                
                
                if (generation == 6)
                {
                    cout << "round " << i << " , encountered a zombie" << endl;
                    cout << "------------------------------------" << endl;
                    cout << "HP: " << health << "  " << "Hunger: " << hunger << "  " << "Money: " << money << endl;
                    cout << "------------------------------------" << endl;
                    cout << "Interactions:" << endl;
                    cout << "1: Attack" << endl;
                    cout << "2: Defend" << endl;
                    cout << "3: Run away" << endl;
                    cin >> responce;
                    if (responce == 1)
                    {
                        cout << "You battled the zombie and got some precious loot" << endl;
                        cout << "----------------------------------------------------------" << endl;
                        lootyn = rand() % 5 + 1;
                        if (lootyn == 2 || lootyn == 3 ||lootyn == 4 || lootyn == 5)
                        {
                            r_money = rand() % 100 + 1;
                            r_health = rand() % 14 + 6;
                            r_hunger = rand() % 15 + 7;
                            cout << "money +" << r_money << endl;
                            cout << "health -" << r_health << endl;
                            cout << "hunger -" << r_hunger << endl;
                            money += r_money;
                            health -= r_health;
                            hunger -= r_hunger;
                        }
                        
                        if (lootyn == 1)
                        {
                            cout << "You found that this zombie has some very valueable loots!" << endl;
                            cout << "-------------------------------------------" << endl;
                            r_money = rand() % 150 + 50;
                            r_health = rand() % 14 + 6;
                            r_hunger = rand() % 15 + 7;
                            r_potion = rand() % 2 + 1;
                            cout << "money +" << r_money << endl;
                            cout << "health potion +" << r_potion << endl;
                            cout << "health -" << r_health << endl;
                            cout << "hunger -" << r_hunger << endl;
                            money += r_money;
                            health -= r_health;
                            hunger -= r_hunger;
                            potion += r_potion;
                        }
                        

                    }
                    if (responce == 2)
                    {
                        cout << "You defended off the zombie" << endl;
                        cout << "----------------------------------------------------------------------" << endl;
                        r_health = rand() % 5 + 1;
                        r_hunger = rand() % 25 + 5;
                        cout << "health -" << r_health << endl;
                        cout << "hunger -" << r_hunger << endl;
                        health -= r_health;
                        hunger -= r_hunger;

                    }
                    if (responce == 3)
                    {
                        cout << "escaped" << endl;
                        r_hunger = rand() % 25 + 5;
                        cout << "hunger -" << r_hunger << endl;
                        hunger -= r_hunger;
                    }

                    
                    
                }
                if (generation == 5 || generation == 10 || generation == 15 || generation == 20 || generation == 25 || generation == 30)
                {
                    cout << "round " << i << " , you arrived at the town!" << endl;
                    cout << "------------------------------------" << endl;
                    cout << "HP: " << health << "  " << "Hunger: " << hunger << "  " << "Money: " << money << endl;
                    cout << "------------------------------------" << endl;
                    cout << "Interactions:" << endl;
                    cout << "1: Leave" << endl;
                    cout << "2: Gamble: costs " << town_g << " money" << endl;
                    cout << "3: Rest(reset all stats to 100 except for money) [" << town_r << " money" << endl;
                    cout << "4: Take a break(No action)" << endl;
                    cin >> responce;  
                }
                            
            }
        }
    }
    
    return 0;
}