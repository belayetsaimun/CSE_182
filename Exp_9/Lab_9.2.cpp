#include<iostream>
using namespace std;
int addition()
{
    int num1,num2, sum;
    cout<<"Enter number 1: "<<endl;
    cin>> num1;
    cout<<"Enter number 2: "<<endl;
    cin>> num2;
    sum = num1 + num2;
    return sum;
}
int main()
{
    int s;
    s = addition();
    cout<<"Output: "<< s;
}
