#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n,i;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans=0;
	for (int i=0;i<n;i++){
		ans=(ans^a[i]);
	}
	cout<<ans<<endl;
	return 0;
}