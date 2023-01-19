#include<iostream>

using namespace std;

int main()
{
    int Number,count=0;
    cout<<"Enter a no. :";
    cin>>Number;

    while(Number>0)
    {
        Number=Number/10;
        count++;
    }

    cout<<count;

    return 0;
}
