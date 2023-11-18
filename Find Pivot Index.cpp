#include<iostream>
using namespace std;
int pivotIndex(int arr[],int n){
    int leftsum=0;
    int rightsum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            leftsum=leftsum+arr[j];
        }
        for(int j=i+1;j<n;j++){
            rightsum=rightsum+arr[j];
        }
        if(leftsum==rightsum){
            return i;
        }
        else{
            leftsum=0;
            rightsum=0;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(int);
    cout<<pivotIndex(arr,n);
    return 0;
}