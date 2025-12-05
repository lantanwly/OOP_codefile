#include<iostream>
using namespace std;


int main(){

    int score=1;
    switch(score){
        case 1:
            cout<<"case 1"<<endl;
            score=2;
            //break;
        case 2:
            cout<<"case 2"<<endl;
            score=3;
    }
    cout<<score<<endl;

    return 0;
}