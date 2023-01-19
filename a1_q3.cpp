#include<iostream> // Multiple prime no.s out of a set of no.s 

using namespace std;

int main()
{
    int Number,i,t,frequency,j; //for EACH no. it should tell PRIME/NOT PRIME

    cout<<"Enter frequency of no.s: ";
    cin>>frequency;
    for (j=1; j<=frequency; j++)
    {
        cout<<"\nEnter no. :";
        cin>>Number;
        t=0;
        for (i=2; i<Number; i++)
        {
            if (Number%i==0)
            {
                t++; //2 --> prime! for once only..after that the value is gonna be increasing post being stored
            }
        }
        if (t==0)
        {
            cout<<"\nprime\n";
        }
        else
        {
            cout<<"\nNot prime\n";
        }


    }
    
    
    return 0;
}

/* 
for (i=1; i<=frequency; i++)
{
    if (x==0)
    {
        cout<<"Prime";
    }
    else
    {
        cout<<"Not Prime";
    }
}
*/
    
    

