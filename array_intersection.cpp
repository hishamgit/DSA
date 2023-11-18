
#include<iostream>
#include <vector>
using namespace std;
int main()
{
    int n,m;
    cin>> n;
    cin>> m;
    int ar1[n];
    for(int i=0;i<n;i++){
        cin>>ar1[i];
    }
    int ar2[m];
    for(int i=0;i<m;i++){
        cin>>ar2[i];
    }
    //(1) loop in loop
    // for(int i=0;i<n;i++){
    //     for (int  j = 0; j < m; j++)
    //     {
    //           if(ar2[j]>ar1[i]){
    //                 break; 
    //             }
    //         if(ar2[j]==ar1[i]){
    //             v.push_back(ar1[i]);
    //             ar2[j]=INT_MIN;      //tactics- update array rather than removing element
    //             break;
    //         }
    //     }
    // }

    //(2) two pointer approach since both arrays are sorted
    
    vector<int> v;
    int i=0,j=0;
    while(i<n && j<m){
        if (ar1[i]==ar2[j])
        {
            v.push_back(ar1[i]);
            i++;
            j++;
        }
        else if (ar1[i]<ar2[j]){
            i++;
        }else{
            j++;
        }
    }

    for(int i:v){
        cout<<i<< ' ';
    }

} 
