// code for first occurence or last occurence of any element using binary search - 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int start = 0, end = n-1;
    int mid, ans = -1;

    while(start<=end){
        mid = (start + end)/2;

        if(arr[mid] == key){
            ans = mid;
            // end = mid-1;      to find first occurence
            start = mid+1;       // to find last occurence
        }
        else if(arr[mid] > key){
            end = mid-1;
        }
        else {
            start = mid+1;
        }
    }

    if(ans == -1){
        cout<<"Key not present"<<endl;
    }
    else{
        cout<<"The last occurence of "<<key<<" is at "<<ans<<endl;
    }

    return 0;
}