#include "player.h"
#include <string>
#include <vector>

Player::Player(const std::string name, int score, std::vector<Dice> dice)
: name(name), score(score), dice(dice) {}

int Player::rollDice() {
    int totalValue = 0;

    for(auto& die : dice) {
        totalValue += die.roll();
    }
    return totalValue;
};