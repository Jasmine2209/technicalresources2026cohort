#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int spaces=0;
    int stars=n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=spaces;j++){
            cout<<"\t";
        }
        for(int j=1;j<=stars;j++){
            if(i>1 && i<=n/2 && j>1 && j<stars){
                cout<<"\t";
            }
            else{
                cout<<"*\t";
            }
        }
        cout<<endl;
        if(i<=n/2){
            stars-=2;
            spaces++;
        }
        else{
            spaces--;
            stars+=2;
        }
    }
    return 0;
}