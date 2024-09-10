#include <iostream>
#include <ctime>
#include "player.h"
#include <string>


int main() {

    srand(time(0)); // Initialisera slumptalsgeneratorn med nuvarande tid

    Dice dice(6, 0);

    dice.roll();

    std::vector<Dice> diceVector = {Dice(6, 0)};

    Player player1("Adam", 0, diceVector);

    int roll = player1.rollDice();
    std::cout << roll << std::endl;

    player1.addDie(6);

    int roll2 = player1.rollDice();

    std::cout << roll2 << std::endl;


    return 0;
}