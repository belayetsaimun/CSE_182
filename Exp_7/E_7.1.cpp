#include<iostream>
using namespace std;
int main()
{
    int arr[20]= {10,-20,30,-40,50,-10};
    int max,i,min;
    max=arr[0];
    for(i=0; i<6; i++)

    {
        if(arr[i]>max)
            max=arr[i];
    }
    cout<<"Max="<<max<<endl;
    min=arr[0];
    for(i=0; i<6; i++)

    {
        if(arr[i]<min)
            min=arr[i];
    }
    cout<<"Min="<<min;

}
