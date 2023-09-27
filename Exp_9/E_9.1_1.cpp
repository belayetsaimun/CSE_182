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
    cout << "Addition: " << sum << endl;
}
int subtraction( )
{
    int sub,num1,num2;
    cout << "Enter number 1: " << endl;
    cin >> num1;
    cout << "Enter number 2: " << endl;
    cin >> num2;
    sub = num1 - num2;
    cout << "Subtraction: " << sub << endl;
}
int multiplication()
{
    int mul,num1,num2;
    cout << "Enter number 1: " << endl;
    cin >> num1;
    cout << "Enter number 2: " << endl;
    cin >> num2;
    mul = num1 * num2;
    cout << "Multiplication: " << mul<< endl;
}
float division()
{
    float div,num1,num2;
    cout << "Enter number 1: " << endl;
    cin >> num1;
    cout << "Enter number 2: " << endl;
    cin >> num2;
    div = num1 / num2;
    cout << "Division: " << div<< endl;
}
int main()
{
    addition();
    subtraction();
    multiplication();
    division();
}

