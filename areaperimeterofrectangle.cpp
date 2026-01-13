//find whether area is greater than perimeter of rectangle
#include<iostream>
using namespace std;
int main(){
    int  l , b , area , perimeter;
    cout << "Enter the length of the rectangle : ";
    cin >> l;
    cout << "Enter the breadth of the rectangle : ";
    cin >> b;
    area = l * b;
    perimeter = 2 * (l+b);
    if(area > perimeter){
        cout << "Area is greater than perimeter" << endl;
    }
    else if(perimeter > area){
        cout << "Area is less than perimeter" << endl;
    }
    else{
        cout << "invalid" <<endl;
    }
    return 0;
}
