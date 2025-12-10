#include<iostream>
using namespace std;

// //函数模板
// template <typename T>
// void swap(T &a,T &b){
//     T temp;
//     temp=a;
//     a=b;
//     b=temp;
// }

// template <typename T>
// class ClassName{
// public:
//     void FunctionName(const T& value){ }
// };

template <typename T>
void Print(T &num){
    cout<<num<<endl;
}

//特化：
template <>
void Print<bool>(bool &value){
    cout<<(value?"true":"false")<<endl;
}

int main(){
    int a=44;
    bool b=1;
    Print(a);
    Print(b);
    return 0;
}
