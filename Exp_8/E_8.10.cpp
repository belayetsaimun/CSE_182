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
    int flag=1;
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            if(i==j&&a[i][j]!=1)
            {
                flag=0;
                break;
            }
             else if(i!=j&&a[i][j]!=0)
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    {
        cout<<"\nIdentity matrix";
    }
    else
    {
        cout<<"\nNot an identity matrix";
    }
}

