//volume of sphere
#include<iostream>
using namespace std;
int main()
{
   float r , pi , volume;
   pi = 3.14;
   cout << "Enter the radius of sphere : ";
   cin >> r;
   volume = (1.33*pi*r*r*r);
   cout  << "Volume of sphere is : " << volume << endl;
   return 0;
}   
