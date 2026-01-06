//swapping of 2 number
#include <iostream>
using namespace std;
int main(){
    int a , b;
    cout << "Enter the value of a";
    cin >> a;
    cout << "Enter the value of b";
    cin >> b;
    cout << "Before swap a = " << a << "Before swapping b = " << b ;
    a = a + b; //56
    b = a - b; //23
    a = a - b; //33
    cout << "\nAfter swap a = " << a << " After swapping b =" << b ;
    return 0;
}
