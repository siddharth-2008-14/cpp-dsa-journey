 #include <iostream>
 using namespace std;
 
 int main() {
     int n;
     cout<<"Enter the number: ";
     cin>>n;
     int old_num = n;
     int rev_num = 0;
     while(n>0){
        int rem = n%10;
        n = n/10;
        rev_num = (rev_num*10) + rem;

     }

     cout<<"The reverse number is "<<rev_num<<endl;
     if(old_num == rev_num){
        cout<<"The given number "<<old_num<< " is palindrome"<<endl;}
    else{
        cout<<"The given number "<<old_num<< " is not  palindrome"<<endl;
     }
     return 0;
 }