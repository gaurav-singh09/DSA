#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    char s[n];
    cin>>s;
    int count=0;
    for(int i=0;i<s[i]!='\0';i++){
        if((s[i]!='a')&&(s[i]!='e')&&(s[i]!='i')&&(s[i]!='o')&&(s[i]!='u')){
            count++;
        }
        else continue;
        
    }
    cout<<count;
}