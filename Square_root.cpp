// TO FIND OUT THE SQURARE ROOT OF A NUMBER WITH FRACTIONAL PARTS - USING BINARY SEARCH

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,precision;
    cin>>n>>precision;

    int start = 1, end = n;
    int mid;
    float ans;

    while(start<=end){
        mid = (start+end)/2;

        if(mid*mid == n){
            ans = mid;
            break;
        }
        if(mid*mid < n){
            ans = mid;
            start = mid+1;
        }
        if(mid*mid > n){
            end = mid-1;
        }

    }

    // now solving for fractional part - 

    float inc = 0.1;
    for(int i=0; i<precision; i++){

        while(ans*ans <= n){
            ans += inc;
        }
        ans = ans - inc;
        inc = inc/10;
    }

    cout<<"the square root of "<<n<<" is "<<ans<<endl;

    return 0;
}