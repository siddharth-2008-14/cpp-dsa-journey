#include <iostream>
using namespace std;
int Nsum(int N){
    if(N<1){
        return 0;
    }
    return N + Nsum(N-1);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int totalSum = Nsum(n);
    cout<<"The sum of "<<n<<" number is "<<totalSum;
    return 0;
}