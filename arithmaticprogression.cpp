//arithmaticprogression of odd number 1 3 5 7 9....
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the value of n:";
    cin>>n;
    for(int i = 1 ; i <= 2*n-1 ; i+=2){
        cout << i << " ";
    }
    return 0;
}

//arithmaticprogression of odd number 4 , 7 ,10 , 13 ....
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the value of n:";
    cin>>n;
    for(int i = 4 ; i <= 3*n-1 ; i+=3){
        cout << i << " ";
    }
    return 0;
}
