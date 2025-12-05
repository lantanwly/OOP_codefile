#include<iostream>
#include<string>
using namespace std;

//代码是由后往前寻找的
int Max(int num1,int num2);//num1和num2是形式参数，函数签名
int Max(int num1,int num2);//num1和num2是形式参数，函数签名

int main(){
    int a=100;
    int b=200;
    int c=500;
    int ret=Max(a,b);
    cout<<"the bigger one is "<<ret<<endl;
    return 0;
}


int Max(int num1,int num2){
    if(num1>num2){
        return num1;
    }else{
        return num2;
    }
}