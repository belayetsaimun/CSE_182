/*Write a C++ program to find the diameter, circumference, and area of a circle
using functions.*/
#include<iostream>
using namespace std;

int diameter(int a)

{
   int dia=2*a;
   cout<<"Diameter= "<<dia<<endl;
}
float circumference(int b)
{
    float circum=2*3.1416*b;
    cout<<"Circumference= "<<circum<<endl;

}
float area(int c)
{
    float a=3.1416*c*c;
    cout<<"Area= "<<a<<endl;
}
int main()
{
    int r;
    cout<<"Enter the radius of the circle: "<<endl;
    cin>>r;
    diameter(r);
    circumference(r);
    area(r);
}
