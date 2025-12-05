#include<iostream>
using namespace std;

// class ClassName{
//     Acess_specifier;// proteced,public,private
//     Data_menbers; //data
//     Member_Functions(){} //function
// };

// ClassName object;

class Component{
//方法
public:             
    string GetName(){
        return name;
    }
//成员属性
private:
    string name;
    int sequnce;
    double timestamp_ms;
};

int main(){
    Component routing_component;
    Component planning_component;
    Component perception_component;
    return 0;
}