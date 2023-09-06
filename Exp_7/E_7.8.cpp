#include<iostream>
using namespace std;
int main()
{
     int n,i,pos,num;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter position and number:";
    cin>>pos>>num;
    for(i=4;i>=pos;i--)
    {
        arr[i+1]=arr[i];
        arr[pos]=num;
        }
        cout<<"New array:"<<endl;
        for(i=0;i<n;i=i+1)
        {
            cout<<arr[i]<<endl;
        }
}





