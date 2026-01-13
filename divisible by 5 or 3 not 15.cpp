//divisible by 5 or 3 but not by 15
#include<iostream>
using namespace std;
int main(){
    int a ;
    cout << "Enter the number : ";
    cin >> a;
    if ((a%5 == 0 || a%3 == 0)&& a%15!=0){
        cout << "divisivle by 3 or 5 not by 15";
    }
    else if(a%15==0) {
        cout << "Divisible by 15 only";
    }
    else{
        cout << "invalid";
    }
    return 0;
} 
