#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){;
    string s;
    cin>>s;
    int n=s.length();
    cout<<n<<endl;
    if(n%2==0){
        reverse(s.begin()+(n/2),s.end());
        cout<<s;
    }
    else cout<<"Error";
    return 0;
}