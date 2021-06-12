#include <bits/stdc++.h>
using namespace std;

void solve(){
    int D,d,a,b,c; cin>>D>>d>>a>>b>>c;
    int ans=0;
    if(D*d>=42) ans=c;
    else if(D*d>=21) ans=b;
    else if(D*d>=10) ans=a;
    else ans=0;
    cout<<ans<<"\n";
}

int main() {
	int t; cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}