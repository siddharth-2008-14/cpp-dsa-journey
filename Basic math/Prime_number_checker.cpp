#include <iostream>
using namespace std;
 

int main()
{
     int count = 0;
     int n;
     cout<<"Enter the number: ";
     cin>>n;
     for(int i = 1; i*i<=n; i++){
        if(n%i == 0){
            count++;
        }
        if(n/i!= i){
            count++;
        }
     }
     if(count == 2){
        cout<<"The number is prime"<<endl;

     }
     else{
        cout<<"The number is not prime"<<endl;
     }

    return 0;
}