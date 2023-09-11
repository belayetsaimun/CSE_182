#include<iostream>
using namespace std;
int main()
{
    int a[10][10],r,c,i,jm;
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
    int isupper=1;
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            if(i<j&&a[i][j]!=0)
            {
                isupper=0;
            }

        }

    }
    if(isupper==1)
    {
        cout<<"\nLower Triangular matrix";
    }
    else
    {
        cout<<"\nNot lower triangular matrix";
    }

}
