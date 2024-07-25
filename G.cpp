#include<bits/stdc++.h>
#define int long long

using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int n,k; cin>>n>>k;
    int a[n+1],pre[n+1]; pre[0]=0;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        pre[i]=pre[i-1]+a[i];
    }

    int ans=0;
    for(int i=1; i<=n; i++){
        int x=i-k, y=i+k;
        x=max(1LL,x); y=min(y,n);

        int pre1=0, pre2=0;
        if(x-1>=1) pre1=pre[x-1]-pre[x-2];
        if(y+1<=n) pre2=pre[n]-pre[y];
        ans=max(ans, a[i]*(y-x+1)+pre1+pre2);
    }
    cout<<ans;

    return 0;
}
