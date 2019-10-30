// given an array perform left rotation with given times and print the array
#include<bits/stdc++.h>
using namespace std;

void leftrotation(int arr[],int n, int d){
    int indx;
    for(int i=0; i<n; i++){
        
        indx=(i+d)%n;
        cout<<arr[indx]<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    int n,d;  // n is the no. of elements  and d is the no. of left rotation we have to perform.
    cin>>n>>d;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    leftrotation(arr,n,d);

    return 0;
}
