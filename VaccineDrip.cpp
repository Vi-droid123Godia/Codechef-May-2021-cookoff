#include <bits/stdc++.h>
using namespace std;


void solve(){
    int g,p; cin>>g>>p;
    int x[10];
    for(int i=0;i<10;++i) cin>>x[i];
    int sum=0;
    for(int i=g;i<10;++i) sum+=x[i];
    auto days=[&](int people){
        return (people/p +(people%p!=0));
    };
    cout<<days(sum+1)<<" "<<days(sum+x[g-1])<<"\n";
}

int main() {
	int t; cin>>t; 
	while(t--){
	    solve();
	}
	return 0;
}