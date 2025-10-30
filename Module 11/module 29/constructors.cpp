#include<iostream>
using namespace std;

 //Constructors are of three types 
 // default constr.
 // parameterized constructor(isme hm parameter bhi de skte hain 
//copy constructor
 //khud ka bhi bna skte h it is too similar to function like ye bhi kuch parameters lega aur kuch iska return type hoga 



class Bike{
public: 
	int tyreSize;
    int engine;
	// //Default COnstructor
	// Bike(){
	// 	cout<<"Constructor call hua!"<<endl;
	// }
	//parameterized
    Bike(int tyreSize,int engine){
	    this->tyreSize=tyreSize;
		this->engine=engine;
    }   
    
    ~Bike(){
	cout<<"destructor call hua "<<endl;

    }

};


int main(){;
    Bike tvs(12,100);//object creation happened here ..compiler will call to constructor 

    Bike honda(13,150);
    Bike royalfield(14,350);
    bool flag= true;
    if(flag==true){
        Bike BMW(17,1000);
        cout<<BMW.tyreSize<<" "<<BMW.engine<<endl;
        
    }
    cout<<tvs.tyreSize<<" "<<tvs.engine<<endl;
    cout<<honda.tyreSize<<" "<<honda.engine<<endl;
    cout<<royalfield.tyreSize<<" "<<royalfield.engine<<endl;
    return 0;
}

//destructor
// 
