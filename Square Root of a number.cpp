#include<iostream>
using namespace std;

long long int findSqrt(int n){
      long long int s=0;
    long long int e=n;
    long long int m=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
        long long int sqr=m*m;
       if((sqr)>n){
        e=m-1;
       }else if((sqr)==n){
        ans=m;
        break;
       }else{
        ans=m;
        s=m+1;
       }
       
       m=s+(e-s)/2;
    }
    return ans;
}

int main(){
    long long int n=27;
    cout<<findSqrt(n);
    return 0;
}