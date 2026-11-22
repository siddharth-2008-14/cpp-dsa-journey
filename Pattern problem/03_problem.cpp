#include <iostream>
using namespace std;
void pattern(int n){
    for(int i = 0; i<n; i++){
        for(int s = 0; s<i; s++){
            cout<<" ";
        }
        for(int j = 0; j<n*2-2*i-1; j++){
            cout<<"*";

        
        }
        for(int s = 0; s<i; s++){
            cout<<" ";
        }
        cout<<endl;

     
    }
}

int main() {
    pattern(5);
    
    return 0;
}