#include <iostream>
using namespace std;
void pattern(int n){
    for(int i = 0; i<n; i++){
        for(int s = 0; s<n-i-1; s++){
            cout<<" ";
        }
        char ch = 'A';
        int breakpoint = (2*i+1)/2 ;
        for(int j = 0; j<2*i+1; j++){
            cout<<ch;
            if(breakpoint<=j) 
            {ch--; }
                else {
                    ch++;
                }
            
        }
         
        
        for(int s = 0; s<n-i-1; s++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main() {
    pattern(5);
    
    return 0;
}