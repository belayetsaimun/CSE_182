#include<iostream>
using namespace std;
int main()
{
    int n,i,j,flag,count;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    flag [n]= {0};
    for(i=0; i<n; i++)
    {
        count=0;
        if(flag[i]!=1)
        {
            for(j=0; j<n; j++)
                if(arr[i]==arr[j])
                {
                    count++;
                    flag[j]=1;

                }
            if(count>1 || count==1)
            {
                cout<<"\n"<<arr[i]<<" occurs "<<count<<" times "
            }
        }
    }
