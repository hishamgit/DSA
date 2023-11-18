//find 3 numbers of their sum gives target
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>> n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    cin>>m;
    int i=0,j,k;
    vector<vector <int>> v;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            for(k=j+1;k<n;k++){
                if(ar[i]+ar[j]+ar[k]==m){
                    v.push_back({ar[i],ar[j],ar[k]});
                }
            }
        }
    }
    for (auto i =0 ; i !=size(v); i++) { 
        for (auto it = v[i].begin();it != v[i].end(); it++) 
            cout << *it << " "; 
        cout << endl; 
    } 
    return 0;
}