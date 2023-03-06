#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int vectorsize;
    cin>>vectorsize;
    vector<int>v;
    for(int i=0;i<vectorsize;i++)
    {
        int t{};
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<vectorsize;i++)
    {
        cout<<v[i]<<" ";
    }  
    return 0;
}
