#include <iostream>


using namespace std;

void swap_alter(int arr[],int n){
    int i=0;
    while(i<n-1){
        swap(arr[i],arr[i+1]);
        i=i+2;
    }
}

void print_array(int ar[],int n){
        for(int i=0;i<n;i++){
            cout<<ar[i]<<' ';
        }
        cout<<endl;
}

int main()
{
    
    int ar1[9]={2,4,3,1,5,6,7,8,9};
    int ar2[4]={1,2,3,4};

    swap_alter(ar1,9);
    swap_alter(ar2,4);

    print_array(ar1,9);
    print_array(ar2,4);

    return 0;
}