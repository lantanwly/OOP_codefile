#include <iostream>
using namespace std;
int main () {
int int_value = 1;
double double_value = 0.0;
char array_value[10];
cout << "address of int_value: " << &int_value << endl;
cout << "address of double_value: " << &double_value << endl;
cout << "address of array_value: " << &array_value << endl;
cout << "array_value[1]:" << &array_value + 1 << endl;
return 0;
}