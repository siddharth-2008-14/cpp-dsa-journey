#include <iostream>
#include <utility>
using namespace std;
bool palindrome(char str[], int len, int i){
     
    if(i>=len/2)
    return true ;
    if(str[i]!=str[len-i-1])
    return false;
    else 
    return true;
    palindrome(str, len, i+1);

    
}

int main() {
    char str[30];
    cout<<"Enter the string: ";
    cin>>str;
    int count = 0;
    int i; 
    while(str[i]!='\0'){
        count++;
    }
    palindrome(str,count, 0);
    cout<<str;
    
     
    return 0;
}