#include<iostream>
using namespace std;
int main()
{
    int a[10][10],r,c,i,j,res[10][10],n;
    cout<<"Enter the number of rows"<<endl;
    cin>>r;
    cout<<"Enter the number of colomns"<<endl;
    cin>>c;
    cout<<"Enter the elements of the matrix:"<<endl;

    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            cout<<"A["<<i<<"]"<<"["<<j<<"]=";
            cin>>a[i][j];
        }
        cout<<endl;
    }
    cout<<"Enter a number: ";
    cin>>n;
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            res[i][j]=n*a[i][j];
        }
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
    cout<<"Scalar Multiplication= "<<endl;
    for(i=1; i<=r; i++)
    {
        cout<<"\t";

        for(j=1; j<=c; j++)
        {
            cout<<res[i][j]<<"   ";
        }
        cout<<"\n";
    }
}




