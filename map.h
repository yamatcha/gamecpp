#ifndef _INC_MAP
#define _INC_MAP
#include<iostream>
using namespace std;

class map{
    private:
        int maptable[5][5]={0};
        int herox=0;
        int heroy=0;
    public:
        map();
        void setherox(int x){herox = x;};
        void setheroy(int y){heroy = y; };
        int getherox(){return herox;};
        int getheroy(){return heroy;};
        void settable(){maptable[herox][heroy]='*';};
        void showtable(){
            for(int i=0;i<5;i++){
                for(int j=0;j<5;j++)
                    cout << maptable[i][j] << ' ';
                cout << endl;
            }
        }
};

#endif