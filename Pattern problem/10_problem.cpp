#include <iostream>
using namespace std;
void pattern(int n){
    for(int i =0; i< n; i++){
        for(int j = 0; j<n-i; j++){
            cout<<"*";
        }
        for(int s =0; s<2*i; s++){
            cout<<" ";
        }
        for(int j = 0; j<n-i; j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    for(int i =0; i< n; i++){
        for(int j = 0; j<=n; j++){
            cout<<"*";
        }
        for(int s =0; s<2*n - (i+1)*2; s++){
            cout<<" ";
        }
        for(int j = 0; j<=n; j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
}

int main() {
    pattern(5);
    
    return 0;
}