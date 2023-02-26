#include<iostream>

using namespace std;

int main()
{
    int i,j,n,star=1,spaces=2*n-3;

    cout<<"Enter n: ";
    cin>>n;
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=star;j++)
        {
            cout<<j<<"\t";
        }

        for(j=1; j<=spaces;j++)
        {
            cout<<"\t";
        }

        if(i==n)
        {
            star--;
        }
        
        for(j=star;j>=1;j--)
        {
            cout<<j<<"\t";
        }
        cout<<endl;
        star++;
        spaces-=2;

    }
    return 0;
}