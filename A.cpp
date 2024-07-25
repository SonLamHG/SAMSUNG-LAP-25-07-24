#include<bits/stdc++.h>
#define int long long

using namespace std;
int n,m;
char a[1002][1002];
main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    cin>>n>>m;
    for(int i=1; i<=n; i++) for(int j=1; j<=m; j++) cin>>a[i][j];

    int ans=0;
    for(int i=1; i<=n; i++) for(int j=1; j<=m; j++){
            if(a[i][j]=='C'){
                int cnt1=0, cnt2=0;
                for(int u:{-1,1}) {
                    if (a[i + u][j] == 'A') cnt1++;
                    if (a[i + u][j] == 'M') cnt2++;
                }
                for(int v:{-1,1}) {
                    if (a[i][j + v] == 'A') cnt1++;
                    if (a[i][j + v] == 'M') cnt2++;
                }
                ans+=cnt1*cnt2;
            }
        }
    cout<<ans;

    return 0;
}
