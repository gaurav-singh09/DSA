#include<iostream>
using namespace std;

class Cricketers{
public: 
    char Name;
    int age;
    int noOfTestMatches;
    int averageScore;


};

int main(){;
    Cricketers Virat;
    Virat.Name='V';
    Virat.age=35;
    Virat.noOfTestMatches=50;
    Virat.averageScore=87;
    
    Cricketers AbDeviliers;
    AbDeviliers.Name='A';
    AbDeviliers.age=40;
    AbDeviliers.noOfTestMatches=47;
    AbDeviliers.averageScore=95;

    //For Dynamic Allocation of DAta we have to do this . 
    // for(int i=0;i<2;i++){
    //     Cricketers *Cricketer=new Cricketers;
    //     Cricketers->Name = ;
    //     cin>>
    //     Cricketer.add(*Cricketer)
    // }  
    // For Dynamic Allocation 
    
    Cricketers Cricketer[2]={Virat,AbDeviliers};
    
    for(int i=0;i<2;i++){
        cout<<"Name "<<Cricketer[i].Name<<endl;
        cout<<"Age:-> "<<Cricketer[i].age<<endl;
        cout<<"noOfTestMatches "<<Cricketer[i].noOfTestMatches<<endl;
        cout<<"averageScore "<<Cricketer[i].averageScore<<endl;

    }
    
    return 0;
}