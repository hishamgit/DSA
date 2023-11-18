#include<iostream>
using namespace std;
//binary_search
int first_occurrence(int ar[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(ar[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(ar[mid]>key){  //else if not if,if-elseif-else statements stop doing comparisons as soon as it finds one that's true. if-if-if does every comparison. The first is more efficient.
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int last_occurrence(int ar[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(ar[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if (ar[mid]>key)
        {
            end=mid-1;
        }
        else if(ar[mid]<key)
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int ar[]={0 ,0, 1, 1, 2, 2, 2, 2};
    cout<<"first occurring index of 2 is "<<first_occurrence(ar,sizeof(ar)/sizeof(int),2)<<endl;
    cout<<"last occurring index of 2 is "<<last_occurrence(ar,sizeof(ar)/sizeof(int),2)<<endl;

    return 0;
}