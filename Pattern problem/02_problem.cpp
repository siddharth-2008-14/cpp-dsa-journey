#include <iostream>
using namespace std;
void pattern(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i; j++){
            cout<<j+1;
        }
        cout<<endl;
        // 21
    }
}

int main() {
    int num;
    cout<<"Enter the num: ";
    cin>>num;
    pattern(num);
     
    return 0;
}