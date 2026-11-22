#include <iostream>
using namespace std;
void pattern(int n){
    for(int i = 0; i<2*i-1; i++){
         int stars = i;
         if(stars>n)
         stars = 2*n-i;
         for(int j = 0; j<=stars; j++){
            cout<<"*";
         }
         cout<<endl;
}}
void pattern11(int n ){
    int start;
    for(int i = 0; i< n; i++){
        start = 1;
        if(i%2==0) start=1;
        else start = 0;
        for(int j = 0; j<i+1; j++){
            cout<<start;
            start = 1-start;

        }
        cout<<endl;
    }
}

int main() {
    pattern11(5);
    
    return 0;
}