#include <iostream>

using namespace std;

int main() 
{
    int rows, number = 1,i,j;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(i = 1; i <= rows; i++) 
    {
        for(j = 1; j <= i; j++) 
        {
            cout << number << " ";
            number++;
        }

        cout << endl;
    }

    return 0;
}
