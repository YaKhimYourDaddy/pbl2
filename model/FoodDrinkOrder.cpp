#include "FoodDrinkOrder.h"

FoodDrinkOrder::FoodDrinkOrder(const string &idFoodDrinkOrder, const string &idOrder, const string &idFoodDrink, int quantity, int purchasedPrice)
    : idFoodDrinkOrder(idFoodDrinkOrder), idOrder(idOrder), idFoodDrink(idFoodDrink), quantity(quantity), purchasedPrice(purchasedPrice) {}

string FoodDrinkOrder::getId() const {
    return idFoodDrinkOrder;
}

string FoodDrinkOrder::getOrderId() const {
    return idOrder;
}

string FoodDrinkOrder::getFoodDrinkId() const {
    return idFoodDrink;
}

int FoodDrinkOrder::getQuantity() const {
    return quantity;
}

int FoodDrinkOrder::getPurchasedPrice() const {
    return purchasedPrice;
}

void FoodDrinkOrder::setQuantity(int quantity) {
    this->quantity = quantity;
}

void FoodDrinkOrder::setPurchasedPrice(int price) {
    this->purchasedPrice = price;
}
