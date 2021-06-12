#include <bits/stdc++.h>
using namespace std;

int a[1001][1001];
void prec(){
    for(int i=1;i<=1000;++i){
        a[i][1]=i*(i+1)/2;
        for(int j=2;j<=1000;++j){
            a[i][j]=a[i][j-1]+(i-1)+(j-1);
        }
    }
}



int main(){
    prec();
    int t; cin>>t;
    while(t--){
        int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
        int sum=0;
        for(int i=x1;i<=x2;++i) sum+=a[i][y1];
        for(int i=y1+1;i<=y2;++i) sum+=a[x2][i];
        cout<<sum<<"\n";
    }
    return 0;
}