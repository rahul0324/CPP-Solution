// code for adding same number "k" from l to r in an array in O(1) time...

for(ll i=0; i<m; i++){
        cin>>a>>b>>k;

        arr[a] += k;
        arr[b+1] -= k;
}

// obtaining final array..

 ll sum=0,res = INT_MIN;
    for(ll i=0; i<=n; i++){
        sum += arr[i];
    }