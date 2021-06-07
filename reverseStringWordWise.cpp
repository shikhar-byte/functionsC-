#include "bits/stdc++.h"
using namespace std;

int main(){
    int day,sum=0;
    cin>>day;

    for(int i=1;i<=day;i++){
        sum+=pow(i,2);
    }

    cout << sum;
    
}