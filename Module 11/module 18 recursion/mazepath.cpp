#include<iostream>
using namespace std;

int maze(int sr,int sc,int er,int ec){
    if(sr==er ||sc==ec) return 1;
    if(sr>er || sc>ec) return 0;
    int rightWays = maze(sr,sc+1,er,ec);
    int downWays = maze(sr+1,sc,er,ec);
    int totalWays= rightWays+downWays;
    return totalWays;
}
int maze2(int row, int col){
    if(row<1 ||col<1) return 0;
    if(row==1 && col==1) return 1;
    int rightWays = maze2(row,col-1);
    int leftWays = maze2(row-1,col);
    int totalWays=rightWays+leftWays;
    return totalWays;
}

void printpath (int sr,int sc,int ec,int er, string s){
    if(sr==er && sc==ec) {
        cout<<s<<endl;
        return;
    }
    if(sr>er || sc>ec) return;
    printpath(sr,sc+1,ec,er,s+'R');
    printpath(sr+1,sc,ec,er,s+'D');
}

void printpath2(int rows,int col,string s){
    if(rows<1 || col<1) return;
    if(rows==1 && col==1) {
        cout<<s<<endl;
        return;
    }
    printpath2(rows,col-1,s+'L');
    printpath2(rows-1,col,s+'U');
}

int main(){
    cout<<maze(1,1,3,3)<<endl;
    printpath(1,1,3,3,"");
    cout<<maze2(3,3)<<endl;
    printpath2(3,3,"");
    return 0;
}