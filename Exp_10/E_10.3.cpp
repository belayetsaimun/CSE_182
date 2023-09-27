//Write a C++ program to sort arrays using pointers and functions.
#include <iostream>
using namespace std;

int sort(int *p, int s)
{
    for (int i = 0; i < s - 1; ++i)
    {
        for (int j = 0; j < s - i - 1; ++j)
        {
            if (*(p+ j) > *(p + j + 1))
            {
                int temp= *(p + j);
                *(p + j)= *(p + j + 1);
                *(p + j + 1)= temp;
            }
        }
    }
}


int main()
{
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    sort(arr, n);

    cout<<"Sorted array is : ";
    for(int i = 0; i < n; ++i)
    {
        cout<<arr[i]<<" ";
    }

}
