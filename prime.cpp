#include<iostream>
#include<math.h>

using namespace std;

bool isPrime(int num){

    if(num == 1){
        return false;
    }

    if( num ==  2){
        return true;
    }

    for(int j=2; j<= sqrt(num) ; j++){
        if(num % j == 0){
            return false;
        }
    }

    return true;

}

int main(){
    int a, b;

    cin>>a>>b;

    for(int i=a; i<=b ; i++){

        if(isPrime(i)){
            cout<<i<<endl; 
        }
    }
}