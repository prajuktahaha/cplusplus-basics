//which one is greatest
#include<iostream>
using namespace std;
int main(){
    int a , b , c;
    cout << "Enter the value of a:";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;
    cout << "Enter the value of c : ";
    cin >> c;
    if ( a > b && a > c){
        cout << "a is greatest among all 3";
    }
    else if (b > a && b > c){
        cout << " b is the greatest amomng all 3";
    }
    else if ( c > a && c > b){
        cout << "c is greatest among all 3";
    }
    else if (a == b && a == c){
        cout << "equal input";
    }
    else {
        cout << "invalid";
    }
    return 0;
}
