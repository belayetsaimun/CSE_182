#include<iostream>
using namespace std;
int main()
{
     int n,i,j,flag;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Duplicate Elements are : "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=1;
                cout<<arr[i]<<endl<<arr[j]<<endl;

            }
        }
    }
    if(flag==0)

        cout<<"Array have no duplicate values";
}
