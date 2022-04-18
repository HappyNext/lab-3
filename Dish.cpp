#include "Dish.h"
#include <iostream>
#include <string>

using namespace std;

Dish::Dish():name("N/A"),calories(0),price(0.0)
{
    cout<<"Сработал конструктор по умолчанию\n";
}

Dish::Dish (string valueName,int valueCalories,double valuePrice)
{
    name=valueName;
    calories = valueCalories;
    price = valuePrice;
    cout<<"Сработал конструктор с параметрами\n";
}

Dish::Dish (string valueName,int valueCalories):name(valueName),calories(valueCalories)
{
    do
    {
        cout<<"Введите цену для блюда "<<name<<"меньше 500$ :"<<endl;
        cin>>price;
    }while(price >= 500.0);
    cout<<"Сработал конструктор со списком инициализации\n";
}

Dish::Dish (const Dish &src)
{
    name=src.name;
    calories=src.calories;
    price=src.price;
    cout<<"Сработал конструктор копирования\n";
}

Dish::~Dish()
{
    cout<<"Сработал деструктор\n";
}

void Dish::setPrice(double valuePrice)
{
    price = valuePrice;
}

double Dish::getPrice()
{
    return price;
}

void Dish::setWeight(int valueCalories)
{
    calories = valueCalories;
}

int Dish::getCalories()
{
    return calories;
}

void Dish::showDish()
{
    cout<<"Блюдо - "<<name<<" - "<<calories<<" ккал - "<<price<<"$\n";
}
