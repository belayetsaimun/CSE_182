#include<iostream>
using namespace std;
int main()
{
     int n,i,j;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Unique Elements in the array:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                break;
            }

        }
        if(i==j)
            {
                cout<<arr[i]<<endl;
            }

    }

}
