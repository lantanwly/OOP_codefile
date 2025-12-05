#include <iostream>
using namespace std;
int main () {
int var=10;
int *ip=&var;
cout<<"var的值 "<<var<<endl;
cout<<"var的地址 "<<ip<<endl;
cout<<"var的值 "<<*ip<<endl;
return 0;
}