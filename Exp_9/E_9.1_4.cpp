#include <iostream>
using namespace std;
int addition(int num1, int num2)
{
    int sum;
    sum = num1 + num2;
    return sum;
}
int subtraction(int num1, int num2)
{
    int sub;
    sub = num1 - num2;
    return sub;
}
int multiplication(int num1, int num2)
{
    int mul;
    mul = num1 * num2;
    return mul;
}
float division(int num1, int num2)
{
    float div;
    div = num1 / num2;
    return div;
}
int main()
{
    int var1, var2, res;
    char o;

    cout << "Enter number 1: " << endl;
    cin >> var1;

    cout << "Enter number 2: " << endl;
    cin >> var2;

    cout << "Enter operator: ";
    cin >> o;

    if (o == '+')
        res = addition(var1, var2);
    else if (o == '-')
        res = subtraction(var1, var2);
    else if (o == '*')
        res = multiplication(var1, var2);
    else if (o == '/')
        res = division(var1, var2);

    cout << "Output: " << res << endl;


}

