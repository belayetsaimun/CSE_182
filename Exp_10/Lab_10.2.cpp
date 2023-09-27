#include<iostream>
using namespace std;
int main()
{
    int i,x[6],sum=0;
    cout<<"Enter 6 numbers: "<<endl;
    for(i=0; i<6; i++)
    {
        cin>>*(x+i);
        sum=sum+ *(x+i);
    }
    cout<<"Sum= "<<sum<<endl;
}
