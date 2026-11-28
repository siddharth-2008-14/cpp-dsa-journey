#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> ms;
    ms.insert(12);
    ms.insert(32);
    ms.insert(12);
    ms.insert(33);
    ms.erase(ms.find(12));
    
    return 0;
}