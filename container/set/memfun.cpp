#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int q;
    cin>>q;
    set<int> s;
    
    while(q--)
    {
        int a,x;
        cin>>a>>x;
        switch(a){
            case 1: s.insert(x);
                      break;
            case 2: s.erase(x); 
                     break;
                     
            case 3: cout << (s.find(x) == s.end() ? "No" : "Yes") << endl;
            break;         
        }
         
       
         
    }
    return 0;
}
