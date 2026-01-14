//using switch case make an calculator
#include<iostream>
using namespace std;
int main(){
    int a , b;
    char c ;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin>>b;
    cout << "Enter the operator (add , sub , mul , div) : ";
    cin>>c;
    switch (c){
        case 'add' : cout << "the sum is : " << a+b;break;
        case 'sub' : cout << "the difference is : " << a-b;break;
        case 'mul' : cout << "the product is : " << a*b;break;
        case 'div' : cout << "the quotient is : " << a/b;break; 
    }
return 0;
}
