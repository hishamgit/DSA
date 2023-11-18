//find which of those numbers in array give target result by adding
#include <iostream>
#include <array>
#include<set>

using namespace std;
int* findMatch(int ar[6],int tar){
    set<int> s;            //initialising set in cpp
    s.insert(ar[0]);
    for(int i=1;i<6;i++){
        int* res = new int[2];
        int match=tar-ar[i];
        if(s.count(match)){
            res[0]=match;
            res[1]=ar[i];
            return res;
            }
        else
            s.insert(ar[i]);
    }
    return 0;
}

int main()
{
    int arr[]={1,2,4,7,8,5};
    int target=10;
    int* result=findMatch(arr,target);
    for(int i=0;i<sizeof(result) / sizeof(int);i++){
        cout<<result[i]<<endl;
    }
    delete[] result;

    return 0;
}
