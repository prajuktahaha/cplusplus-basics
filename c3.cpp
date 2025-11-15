#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks obtained";
    cin>>marks;
    if(marks>=90){
        cout<<"Eligible for Engineering admission"<<endl;
    }
    else{
        cout<<"Not eligible for engineering admission"<<endl;
    }
    if(marks<90){
        cout<<"Eligible for B.com admission"<<endl;
    }
    else{
        cout<<"Choose other stream"<<endl;
    }
}
