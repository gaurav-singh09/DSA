// #include<iostream>
// #include<vector>
// #include<string>
// #include<algorithm>

// using namespace std;

// int main(){
    
//     string arr;
//     getline(cin,arr);
//     int max=arr[0]-'0';
//     for(int i=0;i<arr.size();i++){
//         int x=arr[i]-'0';
//         if(x>max) max=x;

//     }
//     cout<<max<<endl;
  
    
// }


















//2 . question 
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string line;
    getline(cin, line);  // Read entire line of input

    stringstream ss(line);  // Create a stream from the string
    int number, max_val;
    bool first = true;

    while (ss >> number) {
        if (first) {
            max_val = number;
            first = false;
        } else if (number > max_val) {
            max_val = number;
        }
    }

    cout << max_val << endl;

    return 0;
}

