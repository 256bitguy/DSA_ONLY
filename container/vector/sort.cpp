#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x;
    cin>>x;
     vector<int> v;
     
     for(int i=0;i<x;i++)
     {int h;
    cin>>h;
         v.push_back(h);
     } 
     int size=v.size();
     
     sort(v.begin(),v.end());
     for(int i=0;i<x;i++)
     {
         cout<<v[i]<<" ";
     }
    return 0;
}
