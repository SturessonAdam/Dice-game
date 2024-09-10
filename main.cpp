#include <iostream>
#include "dice.h"
#include <ctime>


int main() {

    srand(time(0)); // Initialisera slumptalsgeneratorn med nuvarande tid

    Dice dice(6, 0);

    dice.roll();

    return 0;
}