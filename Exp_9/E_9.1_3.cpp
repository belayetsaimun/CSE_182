#include <iostream>
using namespace std;
int addition(int a,int b)
{
    int sum = a + b;
    cout << "Addition: " << sum << endl;
}
int subtraction(int a,int b)
{

    int sub = a-b;
    cout << "Subtraction: " << sub<< endl;
}
int multiplication(int a,int b)
{
    int mul = a * b;
    cout << "Multiplication: " << mul<< endl;
}
float division(int a,int b)
{
    float div = a / b;
    cout << "Division: " << div<< endl;
}



int main()
{
    int num1,num2;
    cout << "Enter number 1: " << endl;
    cin >> num1;
    cout << "Enter number 2: " << endl;
    cin >> num2;
    addition(num1,num2);
    subtraction(num1,num2);
    multiplication(num1,num2);
    division(num1,num2);

}


