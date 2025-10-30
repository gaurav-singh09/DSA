#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){;
    string s;
    cin>>s;
    int n= s.length();
    int sum =0;
    int power=1;
    for(int i=n-1;i>=0;i--){
        
        int num=s[i]-'0';


        sum+=(num*power);
        power*=10;
    }
    
    
    cout<<sum;

    
    
    return 0;
}
