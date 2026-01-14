//gp of 1,2,4,8,16....
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    int gp = 1;
    for(int i = 1 ; i<=n ; i++){
        cout << gp << endl;
        gp = gp * 2;
    }
    return 0;
}

//gp of 3 , 12 , 48
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    int gp = 3;
    for(int i = 3 ; i<=n ; i++){
        cout << gp << endl;
        gp = gp * 4;
    }
    return 0;
}
