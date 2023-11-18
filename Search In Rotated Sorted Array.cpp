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
int binarySearch(int s,int e,int k,int arr[]){
     int m=s+(e-s)/2;
            while(s<=e){
                if(arr[m]==k){
                    return m;
                }
                else if(arr[m]>k){
                    e=m-1;
                }else{
                    s=m+1;
                }
                m=s+(e-s)/2;

            }
            return -1;

}
int searchIndex(int arr[],int n,int a,int k){
    if(a!=0){
        if(k>=arr[0]){ 
            return binarySearch(0,a-1,k,arr);
            
        }else{
            return binarySearch(a,n-1,k,arr);
        }
    }else{
        return binarySearch(0,n-1,k,arr);
    }
    return -1;
}
int main(){
    int arr[]={3 , 7, 8, 9, 10, 11, 2};
    int n=sizeof(arr)/sizeof(int);
    int a=pivotIndex(arr,n);
    cout<<searchIndex(arr,n,a,8);
    return 0;
}