#include<iostream>
using namespace std;
int main()
{
     int n,i,pos;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the position: ";
    cin>>pos;
    for(i=pos;i<n;i=i+1)
    {
        arr[i]=arr[i+1];

    }
    cout<<"New array : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
