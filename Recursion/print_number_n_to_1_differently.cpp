#include <iostream>
using namespace std;
void print(int n, int i){
    if(i>n){
        return ;
    }
    print(n,i+1);
    cout<<i<<endl;
}
int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    print(n, 1);
    return 0;
}