#include <bits/stdc++.h>
using namespace std;

int main() {
    list <int> l;
    l.push_front(13);
    l.emplace_front(99);
    l.push_back(12);
    for(auto iter:l){
        cout<<iter<<" ";
    }
    
    return 0;
}