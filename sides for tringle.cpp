//sides of triangle
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
    if(a + b > c && b+c > a && c+a > b){
        cout << "yes it can be a sides of a triangle";
    }
    else{
        cout << "no not possible";
    }
    return 0;
}
