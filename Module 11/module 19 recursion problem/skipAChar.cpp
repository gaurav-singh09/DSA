#include<iostream>
#include<string>

using namespace std;

void removechar(string ans,string original){
    if(original.length()==0){
        cout<<ans;
        return ;
    }
    char ch = original[0];
    if(ch=='a') removechar(ans,original.substr(1));
    else removechar(ans+ch,original.substr(1));
    
}

int main(){;
    // string s="Gaurav Singh";
    // string r="";
    // for(int i=0;i<s.length();i++){
    //     if(s[i]!='a') r+=s[i];// or r.pushback(s[i];);
    // }
    // cout<<r;


    string s="Gaurav Singh";
    removechar("",s);

     
    
    return 0;
}