#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    int n;
    cin >> n;
    int counter=1;
    int sol=0;
    while(n!=0)
    {
        int r=n%10;
        n=n/10;
        sol=sol+counter*pow(10,r-1); 
        counter++;
    }
    cout << ans << endl;
    return 0;
}
