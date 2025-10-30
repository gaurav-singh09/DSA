#include<iostream>
#include<string>

void permutation(string ans, string original){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<original.length();i++){
        char ch=original[i];
        string left=original.substr(0,i);
        string right=original.substr(i+1);
        permutation(ans+ch,left+right);

    }


}

using namespace std;

int main(){;
    string str="abc";
    permutation("",str);
    /*
    string str="abcde"
    c ka left aur right ko agar jodn ahai to dono ko nikalke alag se jod do 
    yahan c ka index hai 2;
    string left=str.substr(0,2);
    cout<<left<<endl;
    string right =str.subset(2+1);
    cout<<right<<" "*/

    
    return 0;
}