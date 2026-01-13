//find whether input is divisible by 5 and 3
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter a number : ";
    cin >> n;
    if ( n%5==0 && n%3==0){
        cout << n << " , yes it is divisible by 5 and 3";
    }
    else if (n%5==0) {
        cout << n << " , divisible by 5 but not3";
    }
    else if(n%3==0){
        cout << n << " , divisble by 3 but not 5";
    }
    else{
        cout << "invalid";
    }
    return 0;
}
