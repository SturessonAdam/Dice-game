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
    std::cout << "First roll with 1 die: " << roll << std::endl;

    player1.addDie(6);

    player1.rollDice();

    std::cout << "Second roll with 2 dice: " << player1.getTotalValue() << std::endl;

    player1.increaseScore();

    std::cout << player1.getScore() << std::endl;

    player1.increaseScore();

    std::cout << player1.getScore() << std::endl;

    return 0;
}