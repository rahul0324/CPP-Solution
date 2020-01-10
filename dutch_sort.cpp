// sorting of array which include only three types of numbers like 0,1,2 only - 
// this sorting takes place in linear time - 

#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[], int n){

    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\n";
    }
    cout<<"\n";
}

void dutchsort(int arr[], int n){

    int low=0,temp=0,hi=n-1;
    while(temp<=hi){
        if(arr[temp] == 1){
            temp++;
        }
        else if(arr[temp] == 2){
            swap(arr[hi],arr[temp]);
            hi--;
        }
        else{
            swap(arr[low],arr[temp]);
            low++;
            temp++;
        }
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    dutchsort(arr,n);

    printarray(arr,n);

    return 0;
}
