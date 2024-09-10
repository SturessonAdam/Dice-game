#include "dice.h"
#include <iostream>
#include <cmath>
#include <cstdlib>

Dice::Dice(int sides, int currentValue) : sides(sides), currentValue(currentValue) {}

void Dice::roll() {
    currentValue=(rand()%sides)+1;
    std::cout << currentValue << std::endl;
}

void Dice::getValue() {

}