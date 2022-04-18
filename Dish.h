#ifndef DISH_H
#define DISH_H
#include <iostream>
#include <string>

using namespace std;

class Dish
{
    private:
        string name;
        int calories;
        double price;
    public:
        Dish();
        Dish(string valueName,int valueCalories,double valuePrice);
        Dish(string valueName,int valueCalories=200);
        Dish(const Dish &src);
        virtual ~Dish();
        void setPrice(double valuePrice);
        double getPrice();
        void setWeight(int valueCalories);
        int getCalories();
        void showDish();
};

#endif // DISH_H
