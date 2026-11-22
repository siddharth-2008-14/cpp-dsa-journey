#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // int less;
    // int n1, n2;
    // cout<<"Enter the number n1: "<<endl;
    // cin>>n1;
    // cout<<"Enter the number n2: "<<endl;
    // cin>>n2;
     
    // int fact;
    // for(int i = min(n1, n2); i>=1; i--){
    //     if(n1%i==0 && n2%i == 0){
    //        cout<<"The GCD is "<<i<<endl;
    //        break;
    //     }

    // }
    int n1, n2;
     cout<<"Enter the number n1: "<<endl;
    cin>>n1;
     cout<<"Enter the number n2: "<<endl;
     cin>>n2;
     while(n1>0&&n2>0){
        if(n1>n2){
            n1 = n1%n2;
        }
        else{
            n2 = n2%n1;
        }
     }
     if(n1>0){
        cout<<"The gcd is "<<n1;
     }
     else{
        cout<<"The gcd is "<<n2;
     }
     
    return 0;
}