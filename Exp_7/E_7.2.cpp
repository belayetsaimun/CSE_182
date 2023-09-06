#include<iostream>
using namespace std;
int main()
{
    int arr[10]= {5,7,-10,12,14,5,-7,3}, i;
    int Largest=INT_MIN;
    int SecondLargest=INT_MIN;
    for(i=0; i<10; i++)
    {
        if(arr[i]>Largest)
        {
            SecondLargest=Largest;
            Largest=arr[i];

        }
        else
        {
            if(arr[i]>SecondLargest && arr[i]<Largest)
            {
                SecondLargest=arr[i];
            }
        }

    }
    cout<<"Second Largest Value is: "<<SecondLargest;


}
