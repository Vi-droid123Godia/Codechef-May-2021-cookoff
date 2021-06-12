#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n,k; cin>>n>>k;
	    map<int,int> m[k];
	    for(int i=0;i<n;++i){
	        int num; cin>>num;
	        m[i%k][num]++;
	    }
	    int ans=0;
	    for(int i=0;i<k;++i){
	        int total=0,maxx=-1;
	        for(auto [num,cnt]:m[i]){
	            total+=cnt;
	            maxx=max(maxx,cnt);
	        }
	        ans+=total-maxx;
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}