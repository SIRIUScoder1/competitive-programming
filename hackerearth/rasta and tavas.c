//rasta and tavas
#include <bits/stdc++.h>
using namespace std;
int n,k,ans,pr[1<<20];
int main(){
cin>>n>>k;
for (int i=2;i<=n;i++)
	if (pr[i]==0)
		for (int j=i;j<=n;j+=i)
			pr[j]+=i;
for (int i=1;i<=n;i++)
	if (pr[i]==k)
		ans++;
cout<<ans<<endl;
return 0;}
