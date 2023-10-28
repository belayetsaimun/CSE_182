#include<iostream>
using namespace std;
int arraysum(int arr[],int n)
{
    if(n<=0)
    {
        return 0;
    }
    else
    {
        return arr[n-1]+arraysum(arr,n-1);
    }

}

int main()
{
    int arr[]= {6,2,3,4,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Sum of array elements= "<<arraysum(arr,n)<<endl;

}
