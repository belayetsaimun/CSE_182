#include<iostream>
using namespace std;
int main()
{
    int a[10][10],r,c,i,j,sum=0;
    cout<<"Enter the number of rows"<<endl;
    cin>>r;
    cout<<"Enter the number of colomns"<<endl;
    cin>>c;
    cout<<"Enter the elements of A matrix:"<<endl;

    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            cout<<"A["<<i<<"]"<<"["<<j<<"]=";
            cin>>a[i][j];
        }
        cout<<endl;
    }
    cout<<"A= ";
    for(i=1; i<=r; i++)
    {
        cout<<"\t";
        for(j=1; j<=c; j++)
        {
            cout<< a[i][j]<<"   ";

        }
        cout<<"\n";

    }
    for(i=1; i<=r; i++)
    {
        sum=sum+a[i][r-i+1];
    }
    cout<<"\nSum of the minor diagonal elements= "<<sum;
}
