#include "bits/stdc++.h"
using namespace std;

int isPrime(int num){

    if(num == 2){
        return 1;
    }
    for(int i=2;i<=sqrt(num);i++){
        if(num%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int num=2;  
    int c=0;
    int n;
    cin >> n;

    while(c!=n){

        if(isPrime(num)){
            c++;

        }

        if(c!=n){
            num++;
        }
        
    }

    cout << num;

    return 0;

}