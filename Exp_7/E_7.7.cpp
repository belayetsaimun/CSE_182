#include<iostream>
using namespace std;
int main()
{
    int n,i,j,sum=0;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
  cout<<"Reverse elements of the array:\n";
    for(i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";

    }
}
