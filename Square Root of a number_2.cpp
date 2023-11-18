#include<iostream>
using namespace std;
long long int sqrtInteger(int n){
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
double morePrcsn(long long int temp,int n,int precision){
    double factor=1;
    double ans=temp;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n=9;
    long long int tempSol=sqrtInteger(n);
    cout<<"more precisely "<<morePrcsn(tempSol,n,7)<<endl;
    return 0;
}