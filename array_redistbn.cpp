#include <iostream>


using namespace std;

int main()
{
    
     int m=0;     
    int ar[11]={6,2,6,1,6,4,6,7,3,2,8};
    int j=10; 
    while(m<=j){
        if(ar[m]==6 && ar[j]!=6){
            int temp=ar[m];
            ar[m]=ar[j];
            ar[j]=temp;
            m++;
        }
        if (ar[m]!=6 && ar[j]!=6)
        {
            m++;
            j++;
        }
        if(ar[m]!=6 && ar[j]==6){
            m++;
        }
        j--;
    }
    
    for(int i=0;i<11;i++){
        cout<<ar[i]<<' ';
    }

    return 0;
}