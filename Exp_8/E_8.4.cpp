#include<iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10],r,c,i,j;
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
    cout<<"Enter the elements of B matrix:"<<endl;

    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            cout<<"B["<<i<<"]"<<"["<<j<<"]=";
            cin>>b[i][j];
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
    cout<<"B= ";
    for(i=1; i<=r; i++)
    {
        cout<<"\t";
        for(j=1; j<=c; j++)
        {
            cout<<b[i][j]<<"   ";
        }
        cout<<"\n";
    }
    int flag=0;
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            if(a[i][j]!=b[i][j])
                flag=0;
        }
    }
    if(flag==0)
        cout<<"\nMatrices are equal";
    else
        cout<<"\nMatrices are not equal";
}
