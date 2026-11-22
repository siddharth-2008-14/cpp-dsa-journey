#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, dup, rem;
    int count = 0;
    int arm_num = 0;
    cout<<"Enter the number ";
    cin>>n;
    dup = n;
    int check = n;
    while(n>0){
         
        n = n/10;
        count++;
        
    }
    while(dup>0){
        rem = dup %10;
        dup = dup/10;
        arm_num += pow(rem, count);
    }
    if(arm_num ==check){
        cout<<"The number "<<check<<"  is armstrong number "<<endl;
    }
    else{
        cout<<"The number "<<check<<" is not armstrong number "<<endl;
    }
    
    return 0;
}