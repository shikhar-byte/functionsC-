#include<iostream>
using namespace std;


int octalToDecimal(int n){

    int x=1,ans=0;

    while (n>0)
    {
        int y=n%10;
        ans+=y*x;
        x*=8;
        n=n/10;

    }

    return ans;
    
}

int main(){
    int n;
    cin>>n;

    cout<<octalToDecimal(n)<<endl;
    
}