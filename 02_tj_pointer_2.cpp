#include <iostream>
using namespace std;
int main () {
int a=1832;
int &b=a;
cout<<b<<endl;
cout<<&a<<" "<<&b<<endl;
return 0;
}