#include<iostream>

using namespace std;

int main()
{
    int i,n,j;
    cout<<"Enter n: ";
    cin>>n;

    for (i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            if (j==n+i-1 || j==i)
            {
                cout<<"*";
            }
            else
            {
                cout<<"    ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}