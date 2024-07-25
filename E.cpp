#include<bits/stdc++.h>
#define int long long

using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int n; cin>>n;
    int t[3];
    for(int i=0; i<3; i++) cin>>t[i];
    sort(t,t+3);
    cout<<t[0]+t[1]+n*t[2];

    return 0;
}
