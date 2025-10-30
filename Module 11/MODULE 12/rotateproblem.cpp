#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v1){
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i,int j,vector<int> & v1){
  while(i<=j) {
    int temp=v1[i];
    v1[i]=v1[j];
    v1[j]=temp;
    i++;
    j--;
  }
  return;


}



int main(){
    
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(14);
    v1.push_back(15);
    v1.push_back(12);
    v1.push_back(15);
    v1.push_back(17);
    v1.push_back(18);
    v1.push_back(19);
    v1.push_back(143);
    v1.push_back(153);

    display(v1);
    int k;
    cout<<"Enter the value of K : "<<endl;
    cin>>k;
    if(k>v1.size()) k=k%v1.size();
   

    reversePart(0,v1.size()-k-1,v1); //1 14 15 12 15 17 18 19 143 153
    reversePart(v1.size()-k,v1.size()-1,v1);
    reversePart(0,v1.size()-1,v1);

    display(v1);
    //we cam use both while and for looop to reverse the array and also learn to swap the things 
    //we can initialize two things in or more in for loop and give conditions and do everhting more than one time
     return 0;
} 