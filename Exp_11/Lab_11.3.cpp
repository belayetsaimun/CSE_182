#include<iostream>
using namespace std;
int fib(int n)
{
   if((n==1)||(n==0))
   {
       return(n);
   }
   else{
    return (fib(n-1)+fib(n-2));
   }
}


int main()
{
    int terms,i=0;
    cout<<"Enter the number of terms of the fibonacci series: ";
    cin>>terms;
    cout<<"Fibonacci series: "<<endl;
    while(i<terms)
    {
        cout<<" "<<fib(i);
        i++;
    }
}

