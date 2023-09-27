//Write a C++ program to add two numbers using pointers.
#include<iostream>
using namespace std;
int main()
{
    int num1=60,num2=40;
    int *p1,*p2;
    p1=&num1;
    p2=&num2;
    int sum=*p1+*p2;
    cout<<"Sum= "<<sum;
}
