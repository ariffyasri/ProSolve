#include <bits/stdc++.h>
using namespace std;
const int maxn = 100010;
int n;
pair<int,int> a[maxn];
int Ans[maxn],cnt;
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].first;
        a[i].first=n-a[i].first;
        a[i].second=i;
    }
    sort(a+1,a+n+1);
    for(int l=1,r=0;l<=n;l=r+1){
        for(r=l;r<n&&a[r+1].first==a[r].first;++r);
        if((r-l+1)%a[l].first){
            cout<<"Impossible"<<endl;
            return 0;
        }
        for(int i=l;i<=r;i+=a[l].first){
            cnt++;
            for(int j=i;j<i+a[l].first;++j)Ans[a[j].second]=cnt;
        }
    }
    cout<<"Possible"<<endl;
    for(int i=1;i<=n;i++)cout<<Ans[i]<<' ';
	return 0;
}
