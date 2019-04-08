#ifndef _INC_ENEMY
#define _INC_ENEMY


using namespace std;

class enemy{
    private:
        char name[50];
        int lv;
        int exp;
        int hp;
        int mp;
        int atk;

    public:
        enemy(char* na);
        char* getname(){return name;}
        int getlv(){ return lv; } ;
        int getexp(){ return exp; };
        int gethp(){return hp;};
        int getmp(){return mp;};
        int getatk(){return atk;};
        int attacked(int damage){
            hp-=damage;
        };


};

#endif