#include<iostream>
#include<vector>
#include <bits/stdc++.h> //sort
using namespace std;
int main(){
    int n,k;
    cin>> n;
    cin>> k;
    int ar1[n];
    for(int i=0;i<n;i++){
        cin>>ar1[i];
    }
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(ar1[i]+ar1[j]==k){
                  vector<int> temp;
                temp.push_back(min(ar1[i],ar1[j]));
                temp.push_back(max(ar1[i],ar1[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.begin());
    for (auto i =0 ; i !=size(ans); i++) { 
        for (auto it = ans[i].begin();it != ans[i].end(); it++) 
            cout << *it << " "; 
        cout << endl; 
    } 
    return 0;
}