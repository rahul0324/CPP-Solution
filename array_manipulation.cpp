// array manipulation after m number of querry find the maximum element in the final array..
// refer hackerrank Array manipulation question for this.. 

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll arr[10000009]={0};

int main(){
    ll n,m;
    cin>>n>>m;

    ll a,b,k;
    for(ll i=0; i<m; i++){
        cin>>a>>b>>k;

        arr[a] += k;
        arr[b+1] -= k;
    }

    ll sum=0,res = INT_MIN;
    for(ll i=0; i<=n; i++){
        sum += arr[i];
        if(sum>res){
            res = sum;
        }
    }

    cout<<res<<endl;

    return 0;
}
