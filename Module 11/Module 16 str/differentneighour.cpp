#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){;
    string s;
    getline(cin,s);
    int n=s.length();
    int count=0;

    for(int i=0;i<n;i++){
        if(n==1){
            cout<<s<<endl<<1<<endl;
        }
        if(n==2){
            cout<<s<<endl;
            cout<<(s[0]!=s[1]?2:0)<<endl;
            return 0;
        }
        for(int i=0;i<n;i++){
            if(i==0){
                if(s[i]!=s[i+1]) count++;
            }
            else if(i==n-1){
                if(s[i]!=s[i-1]) count++;

            }
            else if(s[i]!=s[i+1] && s[i]!=s[i-1]){
                count++;
            }
       }
    }
    cout<<s<<endl;
    cout<<count;
    
    return 0;
}