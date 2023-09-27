#include <iostream>
using namespace std;
int addition()
{
    int num1,num2, sum;
    cout << "Enter number 1: " << endl;
    cin >> num1;
    cout << "Enter number 2: " << endl;
    cin >> num2;
    sum = num1 + num2;
    return sum;

}
int subtraction( )
{
    int sub,num1,num2;
    cout << "Enter number 1: " << endl;
    cin >> num1;
    cout << "Enter number 2: " << endl;
    cin >> num2;
    sub = num1 - num2;
    return sub;

}
int multiplication()
{
    int mul,num1,num2;
    cout << "Enter number 1: " << endl;
    cin >> num1;
    cout << "Enter number 2: " << endl;
    cin >> num2;
    mul = num1 * num2;
    return mul;

}
float division()
{
    float div,num1,num2;
    cout << "Enter number 1: " << endl;
    cin >> num1;
    cout << "Enter number 2: " << endl;
    cin >> num2;
    div = num1 / num2;
    return div;

}
int main()
{
    int a=addition();
    cout<<"Addition= "<<a<<endl;
    int s=subtraction();
    cout<<"Subtraction= "<<s<<endl;
    int m=multiplication();
    cout<<"Multiplication= "<<m<<endl;
    float d=division();
    cout<<"Division= "<<d<<endl;
}


