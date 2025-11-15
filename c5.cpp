#include<iostream>
using namespace std;
float amount , balance;
int main(){
    cout<<"Enter balance"<<endl;
    cin>>balance;
    cout<<"Enter the amount"<<endl;
    cin>>amount;
    if(amount <balance){
        cout << "transaction succesful" << endl;
    }
    else if(amount > balance){
        cout << "insufficient balance" << endl;
    }
}
