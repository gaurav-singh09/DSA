#include<iostream>
#include<vector>
using namespace std;

int main(){;
  vector<int> v;
  v.push_back(3);
  v.push_back(4);
  v.push_back(6);
 ;
  v.push_back(1);
  cout<<"Size of the array is :"<<v.size()<<endl;
  cout<<"First element is: "<<v.front()<<endl;
  cout<<"Last element is :"<<v.back()<<endl;
  cout<<"value at index 2 :"<<v.at(2)<<endl;
  cout<<"value at index 1 :"<<v.at(1);


    return 0;
}