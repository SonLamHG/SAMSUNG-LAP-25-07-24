#include<bits/stdc++.h>
#define int long long

using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int n; cin>>n;
    int a[n];
    int sum=0, mx=-1, mn=1e18, ans=0;
    for(int &i:a) {
        cin>>i;
        sum+=i;
        mx=max(mx,i);
        mn=min(mn,i);
    }

    if((n==2 && a[0]!=a[1]) || (sum%2 && n%2==0)){
        cout<<-1;
        return 0;
    }

    if(n>2){
        int d = mx*n-sum;
        if(d%2==0) cout<<d/2;
        else{
            if(n%2){
                d+=n;
                cout<<d/2;
            } else cout<<-1;
        }
    }

    return 0;
}
