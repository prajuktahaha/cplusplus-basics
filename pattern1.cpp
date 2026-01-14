//pattern
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter no of rows :";
    cin>>n;
    int m;
    cout << "Enter no of colons : ";
    cin>>m;
    for(int i = 1 ; i <= n ; i++){
        for(int i = 1 ; i <= m ; i++){
            cout<<"*";
        }
        cout<<endl;
    }
}
