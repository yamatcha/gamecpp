#include "enemy.h"
#include<string.h>
#include<cstdlib>

enemy::enemy(char *ss){
    strcpy(name,ss);
    lv=0;
    exp=0;
    hp=5;
    mp=1;
    atk=1;   
}