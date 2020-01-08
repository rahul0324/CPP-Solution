// this code is for binary search - this algo is used to find key in sorted array -
// this will only work if and only if the array is sorted.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,key;
    cin>>n>>key;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // implementing binary search - 

    int start = 0, end = n-1;
    int mid;

    for(int i=0; i<n; i++){

        if(start>end){
            cout<<"Element not found!"<<endl;
            break;
        }

        mid = (start+end)/2;

        if(arr[mid] == key){
            cout<<"Element found at index "<<mid<<endl;
            break;
        }
        else if(arr[mid] > key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }

    }

    return 0;
}