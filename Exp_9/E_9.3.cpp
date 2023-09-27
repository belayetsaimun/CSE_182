//Write a C++ program to get the largest element of an array using the function.
#include<iostream>
using namespace std;
int Largest()
{
    int arr[10]= {10,2,-30,90,32,100,40,-60,70};
    int i,largest;
    largest=arr[0];
    for(i=0; i<10; i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    cout<<"Largest element of the array= "<<largest<<endl;
}
int main()
{
    Largest();
}

