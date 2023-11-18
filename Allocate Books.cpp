// codestudio
#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int m,int mid){
    int studentCount=1;
    int pageSum=0;
    for(int i=0;i<n;i++){
        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
        }else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }else{
                pageSum=arr[i];
            }
            
        }
    }
    return true;
}

int minPages(int arr[], int n, int m)
{
    int ans=-1;
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(arr, n, m,mid)){
            e=mid-1;
            ans=mid;
        }else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int arr[] = {2 ,8 ,8, 4, 5 };
    int n = sizeof(arr) / sizeof(int);
    int m = 6;
    if(n>=m){
       cout << minPages(arr, n, m);
    }
    return 0;
}