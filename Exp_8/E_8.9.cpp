#include <iostream>
using namespace std;

int main()
{
    int a[10][10],r,c,i,j,count=0;
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

            if (a[i][j] == 0)
            {
                count++;
            }
        }
    }
    cout<<endl;
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

    if (count > (r * c / 2))
    {
        cout << "The matrix is sparse";
    }
    else
    {
        cout << "The matrix is not sparse";
    }
}
