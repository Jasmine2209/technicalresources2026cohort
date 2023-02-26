#include<iostream>

using namespace std;

int main()
{
    int n,i,j,k;
    cout<<"Enter n : ";
    cin>>n;

    for (i=1; i<=n; i++)
    {
        for (k=n-i; k>=0; k--)
        {
            cout<<" ";
            
        }

        for(j=i; j>0; j--)
        {
            cout<<"*";
        }
    cout<<endl;
        
    }

    return 0;
}