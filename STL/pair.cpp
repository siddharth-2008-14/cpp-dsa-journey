#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int, int> p = {12, 13};
    cout<<p.first<<endl;
    pair<int, pair<pair<int, int>, int>> b = {1, {{2,3},5}};
    cout <<b.second.first.first<<endl;
    pair<int, int> arr[] = {{12, 13}, {14, 12}, {19,88}};
    cout<<arr[1].second<<endl;

    return 0;
}