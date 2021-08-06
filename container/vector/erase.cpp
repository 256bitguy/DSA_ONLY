#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        
        int f;
        cin>>f;
        v.erase(v.begin()+(f-1));
        int s1,s2;
        cin>>s1>>s2;
          v.erase(v.begin()+(s1-1),v.begin()+s2-1);
       int size=v.size();
       cout<<size<<endl;
       for(int j=0;j<size;j++)
       {
        cout<<v[j]<<" ";   
       }
        
        
    return 0;
}
