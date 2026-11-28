#include <iostream>
using namespace std;
int Factorial(int N){
    if(N<1){
        return 1;
    }
    return N * Factorial(N-1);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int totalSum = Factorial(n);
    cout<<"The factorial of "<<n<<" number is "<<totalSum;
    return 0;
}