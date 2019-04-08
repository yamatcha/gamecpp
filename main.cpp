#include "hero.h"
#include "enemy.h"
#include "map.h"
#include <iostream>

int game(){
    char c;
    cout << "i-up j-left l-right k-down" << endl;
    cin >> c;
};

int main(){
    map field = map();
    string hname;
    cout << "Welcome to Game!"<<endl;
    cout << "Please tell me your name!"<<endl;
    cin >> hname;
    hero hero1 = hero(hname);
    cout << "Game start!" <<endl;
    field.showtable;



}