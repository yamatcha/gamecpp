#include "hero.h"

hero::hero(string ss){
    name = ss;
    lv=0;
    exp=0;
    hp=5;
    mp=1;
    atk=1;
    lvtable[0]=10;
    int diff=10;
    for(int i=2;i<50;i++){
        lvtable[i]=lvtable[i-1]+(diff)*1.1;
        diff *= 1.1;
    }  
}