//% ofstudents grade in nested condition
#include<iostream>
using namespace std;
int main(){
    float marks;
    cout << "Enter your marks :";
    cin >> marks;
    if (marks>=40 && marks <= 100){
        if(marks >=81 && marks<=100){
            cout << "Very good";
        }
        else if(marks >=61 && marks <=80){
            cout << "Good";
        }
        else if(marks >=41 && marks <=60){
            cout << "Average";
        }
    }
    else{
        if(marks<=40 && marks>=0){
            cout << "fail";
        }
        else{
            cout << "invalid";
        }
    }
    return 0;
}
