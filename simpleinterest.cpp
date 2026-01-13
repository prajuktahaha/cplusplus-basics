//simple interest
#include<iostream>
using namespace std;
int main()
{
    float p , r , t , SI;
    cout << "Enter the p amount" << endl;
    cin >> p;
    cout << "Enter the rate"<<endl;
    cin >> r;
    cout << "Enter the time" <<endl;
    cin >> t;
    SI = (p*r*t)/100;
    cout << "Simple interest is : " << SI << endl;
    return 0;
} 
