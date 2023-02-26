#include<iostream>

using namespace std;

int main()
{
    int i,j,n,k;
    cout<<"Enter number of rows: ";
    cin>>n;

    for (i=1;i<=n;i++)
    {   
        k=1;
        for(j=0;j<=i;j++)
        {   
            cout<< k <<'\t';
            k=(k*(i-j)/(j+1));
        }
        cout<<endl;
    }
    return 0;
}