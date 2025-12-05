#include<iostream>
using namespace std;

int main(){
    const string s1("s1");
    const string s2("s2");
    const string s3("s3");
    const string s4("s4");
    string result=s1+s2+s3+s4; //实际上是链式调用
    //否则：
    result+=s1;
    result+=s2;
    result+=s3;
    result+=s4;
    cout<<"jafhkjfh"<<"  "<<result<<"  "<<"dahihfa"<<"  "<<endl;//其实也是链式调用
    return 0;
}