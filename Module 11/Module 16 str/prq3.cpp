#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
//To check the word is palindrome or not 

int main(){;
    string s;
    cin>>s;
    string t=s;
    reverse(t.begin(),t.end());

    if(s==t) cout<<"Yes";
    else cout<<"No";

    
    return 0;
}