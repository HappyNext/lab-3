#include <iostream>
#include "Dish.h"
#include "windows.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Dish one;
    one.showDish();
    Dish two("Паста с сыром",125,6.3);
    two.showDish();
    Dish three=two;
    three.showDish();
    Dish menu[3]={Dish("Абрикосовый пирог",450), Dish("Банановый тирамису")};
    for(int i = 0; i <3; i++)
    {
        menu[i].showDish();
    }
    return 0;
}
