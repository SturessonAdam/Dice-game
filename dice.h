#include <string>

class Dice {
    public:
    Dice(int sides, int currentValue);

    void roll();
    void getValue();


    private:
    int sides;
    int currentValue;

};