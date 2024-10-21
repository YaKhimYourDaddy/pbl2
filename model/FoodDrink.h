#ifndef FOODDRINK_H
#define FOODDRINK_H

#include <iostream>
using namespace std;

class FoodDrink {
private:
    string idFoodDrink;
    string name;
    int currentPrice;

public:
    FoodDrink(const string &idFoodDrink, const string &name, int currentPrice);
    string getId() const;
    string getName() const;
    int getCurrentPrice() const;
    void setName(const string &name);
    void setCurrentPrice(int currentPrice);
};

#endif // FOODDRINK_H
