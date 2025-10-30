#include<iostream>
using namespace std;

class player(){
private:
    int health;
    int age;
    int score;
    bool alive;
    
public:
    int gethealth() return health;
    int getage() return age;
    int getscore() return score;
    int isAlive() return alive;

        
       
}

int main(){;
    //passing classes object to function
    player nehru;
    nehru.health()=50;
    nehru.age()=57;
    nehru.score()=8;
    nehru.alive()=1;
    
    cout<<nehru.gethealth()<<endl;
    cout<<nehru.getage()<<endl;
    cout<<nehru.getscore()<<endl;
    cout<<nehru.isAlive()<<endl;

    return 0;
}