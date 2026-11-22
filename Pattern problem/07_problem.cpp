#include <iostream>
using namespace std;
void pattern(int n){
    char ch = 'A';
     for(int i = 0; i<n; i++){
        for(ch = 'A'; ch<'A'+(n-i); ch++){
            cout<<ch;
        }
        cout<<endl;

     }
}
    
void pattern16(int n){
    for(int i = 0; i<n; i++){
        char start = 'A' + i;
        for(int j = 0; j<i+1; j++){
            cout<<start;
        }
         
        cout<<endl;
    }

}
int main() {
    pattern(5);
    pattern16(5);
    
    return 0;
}