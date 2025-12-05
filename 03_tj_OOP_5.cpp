#include<iostream>
using namespace std;


class Test{
public:
    int a=0;
    int b=1;
    int c=3;
    static int d;//直接初始化不允许
};
//类外初始化
int Test::d=4;

int main(){
    Test test_1;
    Test test_2;
    cout<<"num is "<<test_1.d<<endl;
    test_2.d=6;
    cout<<"num is "<<test_1.d<<endl;
    cout<<"-------------"<<endl;
    cout<<"the address of test is "<<&test_1.a<<endl;
    cout<<"the address of test is "<<&test_1.b<<endl;
    cout<<"the address of test is "<<&test_1.c<<endl;
    //地址不连续
    cout<<"the address of test is "<<&test_1.d<<endl;
    cout<<"the address of test is "<<&Test::d<<endl;
    return 0;
}