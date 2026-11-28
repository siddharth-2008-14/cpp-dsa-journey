#include<bits/stdc++.h>
using namespace std;

int main() {
     vector <int> v;
     v.push_back(88);
     v.emplace_back(99);
     vector <pair<int, int>> vec;
     vec.push_back({1, 2});
     vec.emplace_back(12,13);
     vector <int> v1(5, 14);
     vector<int> v2(5);
     vector <int> v3(v1);
    //  cout<<v3[2]<<"or"<<v3.at(2)<<endl;
    vector <int> v4;
    v4.push_back(12);
    v4.push_back(13);
    v4.emplace_back(10);
    vector <int>:: iterator it = v4.begin();
    it++;
    // cout<<*(it)<<endl;
    it++;
    // cout<<*(it)<<endl;
    vector<int>:: iterator ite = v3.end();
    ite--;
    // cout<<*(ite)<<endl;
    vector<int> vec1 = {12, 13, 14, 15, 16};
    // vector <int>:: iterator iter;
    // for(iter = vec1.begin(); iter<vec1.end(); iter++){
    //     cout<<*(iter)<<" "<<endl;
    // }
    // vec1.erase(vec1.begin()+2, vec1.end()-1);
    vec1.insert(vec1.begin(), 7);
    
    vec1.insert(vec1.begin()+1, 2, 8);
    vector<int> copy(3, 60);
    cout<<vec1.size()<<endl;
    vec1.insert(vec1.begin(), copy.begin()+1, copy.end());
    for(auto iter:vec1){
        cout<<iter<<" ";
    }

    
    return 0;
}