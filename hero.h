#ifndef _INC_HERO
#define _INC_HERO

#include<random>

using namespace std;

class hero{
    private:
        string name;
        int lv;
        int exp;
        int hp;
        int mp;
        int atk;
        int lvtable[50];

    public:
        hero(string na);
        string getname(){return name;}
        int getlv(){ return lv; } ;
        int getexp(){ return exp; };
        int gethp(){return hp;};
        int getmp(){return mp;};
        int getatk(){return atk;};
        int lvup(){
            if(lv>30) return 0;
            if(exp>=lvtable[lv]){
                lv++;
                return 1;
            }
            else return 0;
        };
        int attacked(int damage){
            hp-=damage;
        };
        int escape(){
            random_device rnd;
            mt19937 mt(rnd());
            uniform_int_distribution<> rand100(0,1);
            return rand100(mt);
        };

};

#endif