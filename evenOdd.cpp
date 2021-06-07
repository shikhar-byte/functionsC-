#include<iostream>
using namespace std;

void isEvenOdd(int n){
    if(n%2 == 0){
        cout<<"Even"<<endl;
    }

    else {
        cout<<"odd"<<endl;

    }
}

int main(){
    int n;
    cin>>n;

    isEvenOdd(n);

}