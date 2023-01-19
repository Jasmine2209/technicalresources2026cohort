#include<iostream>

using namespace std;

int main()  
{
    int n,i,j,t=0;  
    cout<<"Enter a value of n: ";
    cin>>n; 

    for (i=2; i<=n; i++)
    {
        for (j=2 ; j<=i; j++)
        {
            if (i%j==0)
            {
                t++;
            }
        
        }

        if (t==0)
        {
            cout<<i<<endl;
        }


    }

    return 0;

}
