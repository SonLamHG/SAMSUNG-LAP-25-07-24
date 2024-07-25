#include<bits/stdc++.h>
#define int long long

using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int n; cin>>n;
    int a[n];
    int sum=0;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        sum+=a[i];
    }

    int t; cin>>t;
    int k=0;
    while(t--){
        int op; cin>>op;
        if(op==1){
            int x,val; cin>>x>>val;
            x=(n*n-k)%n;
            sum-=a[x]+val;
            a[x]=val;
            cout<<sum<<'\n';
        } else {
            int x; cin>>x;
            k+=x;
            cout<<sum<<'\n';
        }
    }

    return 0;
}
