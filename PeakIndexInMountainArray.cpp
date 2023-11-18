#include<iostream>
#include <algorithm>
using namespace std;
int peakIndexInMountainArray(int ar[],int n){
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    while(s<e){
        if(ar[m+1]<ar[m]){
            e=m;
        }
        else{
            s=m+1;
        }
        m=s+(e-s)/2;
    }
    return e;
}
int main(){
    int ar[]={0,5,4,3,2};
    int n=sizeof(ar)/sizeof(int);
    cout<<peakIndexInMountainArray(ar,n);
    return 0;
}