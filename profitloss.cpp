//determine profit and loss
#include<iostream>
using namespace std;
int main(){
    int cp , sp ;
    //for profit = SP - CP
    //for loss = CP - SP
    cout << "Enter your cost price : " ;
    cin >> cp ;
    cout << "Enter your selling price : ";
    cin >> sp;
    if (sp > cp){
        cout << "the profit is : " << sp-cp << endl;
    }
    else{
        cout << "the loss is : " << cp - sp << endl;
    }
    return 0;
}
