#include<iostream>

using namespace std;
  
int main()
{   
    int i,j,n;
    cout<<"Enter n: ";
    cin>>n;
    for (int i = 1; i <= n; i++) 
    {
  
        // Print characters of current row
        for (int j = 1; j <= n; j++) 
        {
            // For i = 1, we print a '*' only in first and last columns
            // For i = 2, we print a '*' only in second and second last columns
            // In general, we print a '*' only in i-th and n+1-i th columns
  
            if (j == i || j == (n + 1 - i))
            {
                cout<<"*";
            }
                
            else
            {
                cout<<" ";
            }
                
        }
  
        // Print a newline before printing the next row.
        cout << endl;
    }
    return 0;
}
  