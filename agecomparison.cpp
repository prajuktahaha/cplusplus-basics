//age of ram sham and ajay determine youngest in nested condition
#include<iostream>
using namespace std;
int main(){
    int r , s , a;
    cout << "Enter the age of ram :";
    cin >> r;
    cout << "Enter the age of shyam :";
    cin >> s;
    cout << "Enter the age of ajay:";
    cin >> a ;
    if(r < s){
        if(r < a){
            cout << "Ram is youngest";
        }
        else{
            cout << "Ajay is youngest";
        }
    }
    else{
        if(s < a){
            cout << "Shyam is youngest";
        }
        else{
            cout << "Ajay is youngest";
        }
    }
}
