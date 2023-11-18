#include<iostream>
using namespace std;
int pivotIndex(int arr[],int n){
    if(arr[0]>arr[n-1]){
        int s=0;
        int e=n-1;
        int m=s+(e-s)/2;
        while(s<e){
                if(arr[m]>=arr[0]){
            s=m+1;
            }else{
                e=m;
            }
            m=s+(e-s)/2;
        }
        return e;
    }else{
        return 0;
    }
    
}
int main(){
    int arr[]={2,1};
    int n=sizeof(arr)/sizeof(int);
    cout<<pivotIndex(arr,n);
    return 0;
}