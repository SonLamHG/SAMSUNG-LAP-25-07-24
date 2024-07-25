#include<bits/stdc++.h>
#define int long long

using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int n; cin>>n;
    int a[n];
    for(int &i:a) cin>>i;

    sort(a,a+n,greater<int>());

    int mx=0, cnt=0;
    for(int i=0; i<n; i++){
        if(a[i]*(i+1)>mx){
            mx=a[i]*(i+1);
            cnt=i+1;
        }
    }
    cout<<cnt<<'\n'<<a[cnt-1];

    return 0;
}
