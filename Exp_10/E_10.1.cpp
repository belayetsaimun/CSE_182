/*Write a C++ Program to change the value of a constant integer using
pointers.*/
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the value of the constant integer : ";
    cin>>num;
    int *p;
    p=&num;
    cout<<"The value of the constant integer is : "<<*p<<endl;
    *p=200;
    cout<<"After changing the value is : "<<*p<<endl;

}
