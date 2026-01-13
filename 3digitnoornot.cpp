//find whether input is 3 digit number or not
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter a number : ";
    cin >> n;
    if ( n>=100 && n<999){
        cout << n << " , yes it is 3 digit number";
    }
    else {
        cout << n << " , not 3 digit number";
    }
}
