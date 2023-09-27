/*Write a C++ program to find the sum of two one-dimensional arrays using
the function.*/
#include<iostream>
using namespace std;
int arra()
{
    int arr1[10]= {5,6,7,8,9},arr2[10]= {1,2,3,4,11};
    int i,sum[10];
    cout<<"Sum of the two arrays: "<<endl;
    for(i=0; i<5; i++)
    {
        sum[i]=arr1[i]+arr2[i];
    }
    for(i=0; i<5; i++)
    {
        cout<<sum[i]<<" ";
    }
}
    int main()
    {
        arra();
    }
