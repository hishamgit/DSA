#include<iostream>
using namespace std;
int binary_search(int ar[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(ar[mid]==key){
            return mid;
        }
        else if(ar[mid]>key){
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main(){
    int ar1[]={1,3,5,6,7,9,28};
    int ar2[]={2,4,6,7,8,18};
    int index=binary_search(ar2,sizeof(ar2)/sizeof(int),6);
    cout<<"index of 6 is "<<index<<endl;

    return 0;
}