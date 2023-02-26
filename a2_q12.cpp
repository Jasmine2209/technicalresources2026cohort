#include <iostream>

using namespace std;

int main() 
{
    int num,i,j,c,a=0,b=1;

    cout << "Enter number of rows: ";
    cin >> num;

    for(i=1; i<= num; i++) 
    {
        for(j = 1; j<= i; j++) 
        {          
            cout << a <<' ';
            c=a+b;
            a=b;
            b=c;        
        }

        cout << endl;
    }

    return 0;
}




