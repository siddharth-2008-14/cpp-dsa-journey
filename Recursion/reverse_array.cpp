#include <iostream>
#include <utility>
using namespace std;
void reverse(int arr[],int size, int i){
     if(i>=size/2){
        return;
     }
     swap(arr[i], arr[size-i-1]);
     reverse(arr,size, i+1);
      
}

int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cout<<"Enter the value of arr [" <<i<<"]";
        cin>>arr[i];
    }
     
    reverse(arr, n, 0);
    for(int i = 0; i<n; i++){
        cout<<arr[i];
    }
    return 0;
}