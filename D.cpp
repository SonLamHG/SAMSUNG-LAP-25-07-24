#include<bits/stdc++.h>
#define int long long

using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int n; cin>>n;
    int a[n];
    map<int,bool> mp;
    for(int &i:a) cin>>i, mp[i]=1;

    sort(a,a+n);

    for(int i=0; i<n; i++){
        if(mp[a[i]]){
            cout<<a[i]<<'\n';
            mp[a[i]/0.75]=0;
        }
    }

    return 0;
}
