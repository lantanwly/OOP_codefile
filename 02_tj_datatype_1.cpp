//
// Created by jetson on 25-9-4.
//
#include<iostream>
// #include"stdint.h"
#include<bitset>
using namespace std;



int main(){

    uint8_t a=255;//一般设得大一点
    //数值反转
    // a++;


    printf("a is:%d\n",a);
    printf("a is:%02x\n",a);
    cout<<"a is:"<<bitset<16>(a)<<endl;

    return 0;
}
