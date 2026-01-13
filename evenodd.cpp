//take  x input and tell its even or odd
#include<iostream>
using namespace std;
int main()
{
   int x;
   cout << "Enter the value of x : ";
   cin >> x;
   if (x%2==0){
    cout << "even" << endl;
   }
   else{
    cout << "odd" << endl;
   }
   return 0;
}    
