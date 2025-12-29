//gonna use show function ok
#include <iostream>
using namespace std;
class addition {
    public:
    int a;
    int b;
    void num1(){
        cout << "enter a 4 digit number:";
        cin>>a;
    }
    void num2(){
        cout << "Enter another 4 digit number:";
        cin>>b;
    }
    void show(){
        int sum = a + b;
        cout << "The sum of two number is: " <<sum << "\n";
    }
};
int main(){
    addition obj;
    obj.num1();
    obj.num2();
    obj.show();
    return 0;
}
