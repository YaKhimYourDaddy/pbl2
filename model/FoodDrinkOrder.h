#ifndef FOODDRINKORDER_H
#define FOODDRINKORDER_H

#include <iostream>
using namespace std;

class FoodDrinkOrder {
private:
    string idFoodDrinkOrder;
    string idOrder;
    string idFoodDrink;
    int quantity;
    int purchasedPrice;

public:
    FoodDrinkOrder(const string &idFoodDrinkOrder, const string &idOrder, const string &idFoodDrink, int quantity, int purchasedPrice);
    string getId() const;
    string getOrderId() const;
    string getFoodDrinkId() const;
    int getQuantity() const;
    int getPurchasedPrice() const;
    void setQuantity(int quantity);
    void setPurchasedPrice(int price);
};

#endif // FOODDRINKORDER_H
