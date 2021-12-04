//The size() function returns the number of elements in the current value

#include<iostream>
#include<vector>   
using namespace std;
int main(){
  vector<int> v;    // declaration of a vector with unknown size
    //push opearation that stores the element 
  v.push_back(5);
  v.push_back(8);
 // v.size() function returns the size of the vector that returns the number of element stored in the vector
  cout<<v.size();
  return 0;
}

//output 2
