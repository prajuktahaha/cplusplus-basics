//composite and prime
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    for(int i = 2 ; i<=n/2 ; i++){
        if(n%i==0){
             cout <<"Composite number";
             break;
        }
        else{
            cout << "Prime number";
            break;
        }
    }
    return 0;
} 
