#include "Dish.h"
#include <iostream>
#include <string>

using namespace std;

Dish::Dish():name("N/A"),calories(0),price(0.0)
{
    cout<<"�������� ����������� �� ���������\n";
}

Dish::Dish (string valueName,int valueCalories,double valuePrice)
{
    name=valueName;
    calories = valueCalories;
    price = valuePrice;
    cout<<"�������� ����������� � �����������\n";
}

Dish::Dish (string valueName,int valueCalories):name(valueName),calories(valueCalories)
{
    do
    {
        cout<<"������� ���� ��� ����� "<<name<<"������ 500$ :"<<endl;
        cin>>price;
    }while(price >= 500.0);
    cout<<"�������� ����������� �� ������� �������������\n";
}

Dish::Dish (const Dish &src)
{
    name=src.name;
    calories=src.calories;
    price=src.price;
    cout<<"�������� ����������� �����������\n";
}

Dish::~Dish()
{
    cout<<"�������� ����������\n";
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
    cout<<"����� - "<<name<<" - "<<calories<<" ���� - "<<price<<"$\n";
}
