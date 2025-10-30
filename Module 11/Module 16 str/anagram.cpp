#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){;
    string s;
    string t;
    cout<<"Enter the string s : "<<endl;
    cin>>s;
    cout<<"Enter the string t : "<<endl;
    cin>>t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<<true;
    else cout<<false;
    
    return 0;
}