//forloop table of a number n
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter value of n:";
    cin >> n;
    for(int i=1 ; i<=n*10 ; i++){
       if(i%n==0) cout << i << endl;
    }
    return 0;
}
