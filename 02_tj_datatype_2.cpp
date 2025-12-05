#include<iostream>
// #include"stdint.h"
#include<bitset>
using namespace std;

int main(){
    //浮点数省略问题
    double length=3.0000000000000001*2.00000000000000002;
    cout<<length<<endl;
    if(length-6<0.00001){//常用写法
        cout<<"equal!"<<endl;
    }
    return 0;
}