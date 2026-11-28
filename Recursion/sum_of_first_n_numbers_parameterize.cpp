#include <iostream>
using namespace std;
void Nsum(int sum,int n){
   if(n==1){
    cout<<sum;
    return;
   }
   Nsum(sum*n, n-1);
}
     

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    Nsum(0,n);
    return 0;
}