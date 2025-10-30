#include<iostream>
#include<climits>

using namespace std;

int main(){;
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int maxsum=INT_MIN;
    int maxIdx=-1;
    for(int i=0;i<=n-k;i++){// almost n-k+1 operation
        int sum=0;
        for(int j=i;j<i+k;j++){//har baar k times ...i.e. k times
            sum+=arr[j];
        }
        // maxsum=max(maxsum,sum);
        if(maxsum<sum){
            maxsum=sum;
            maxIdx=i;
        }//total op n-k+1)*K
        // T.C = O((n-k )*k) or k*n
        //k keep changing that's why it is not constant and thus it will take place in this . 
    }
    cout<<maxsum<<endl;
    cout<<maxIdx;
    return 0;
}