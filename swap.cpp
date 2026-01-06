//swapping of 2 number
#include <iostream>
using namespace std;
int main(){
    int a = 120 , b = 122;
    cout << "Before swap a = " << a << "Before swapping b =" << b ;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "\nAfter swap a = " << a << " After swapping b =" << b ;
    return 0;
}
