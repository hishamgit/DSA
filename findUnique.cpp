#include <iostream>

using namespace std;
void unique(int ar[],int k){
    int ar1[k]={0};
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            if (ar[j]==ar[i])
            {
                ar1[i]++;
            }
        }

    }
    for(int i=0;i<k;i++){
        if (ar1[i]==1)
        {
            cout<<ar[i]<<endl;
        }
    }
}

int main()
{
    int k;
    cin >> k;
    int ar[k];
    for(int i=0;i<k;i++){
        cin >>ar[i];
    }
    unique(ar,k);
    return 0;
}