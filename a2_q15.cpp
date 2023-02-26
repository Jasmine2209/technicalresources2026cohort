#include <iostream>

using namespace std;

int main()
{
	int n,i,j,star=1, space=n/2, outer_var=1,inner_var;
    cout<<"Enter n: ";
    cin>>n;

	for (i=1; i<= n; i++) 
    {

        inner_var=outer_var;

		for (j = 1; j<=space; j++) {
			cout <<"\t";
		}
		
		for (j = 1; j <=star;j++) 
        {
			cout <<inner_var<<"\t";

            if (j<=star/2)
            {
                inner_var++;
            }
            else
             {
                inner_var--;
            }
		}
        cout<<endl;
		if (i<= n/2) {
			space--;
            star+=2;
            outer_var++;
		}
		else {
			space++;
            star-=2;
            outer_var--;
		}
	}
	
}

