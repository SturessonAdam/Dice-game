#include <string>

class Dice {
    public:
    Dice(int sides, int currentValue);

    void roll();
    int getValue();


    private:
    int sides;
    int currentValue;

};