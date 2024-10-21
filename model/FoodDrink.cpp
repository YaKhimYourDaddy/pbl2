#include "FoodDrink.h"

FoodDrink::FoodDrink(const string &idFoodDrink, const string &name, int currentPrice)
    : idFoodDrink(idFoodDrink), name(name), currentPrice(currentPrice) {}

string FoodDrink::getId() const {
    return idFoodDrink;
}

string FoodDrink::getName() const {
    return name;
}

int FoodDrink::getCurrentPrice() const {
    return currentPrice;
}

void FoodDrink::setName(const string &name) {
    this->name = name;
}

void FoodDrink::setCurrentPrice(int currentPrice) {
    this->currentPrice = currentPrice;
}
