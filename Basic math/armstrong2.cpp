#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int divisor = 0;
    cout << "Enter the number " << endl;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            cout << i << " ";
             
            if((n%i)!=i)
            cout<<n/i<<" ";
    }
    return 0;
}