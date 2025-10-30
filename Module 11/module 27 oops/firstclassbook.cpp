#include<iostream>
using namespace std;

class book{
public: 
    char name;
    int noofpage;
    int price;

    int countbooks(int p){
        if(price<p) return 1;
        else 0;
    }

    bool isbookpresent(char book){
        if(name==book) return true;
        else false;
    }
};

int main(){;
    book harrypotter;
    harrypotter.name='H';
    harrypotter.noofpage=50;
    harrypotter.price=500;

    cout<<harrypotter.countbooks(1000)<<endl;
    cout<<harrypotter.isbookpresent('H')<<endl;
    return 0;
}