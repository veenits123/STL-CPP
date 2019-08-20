#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

int32_t main(){
	
	ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	//  code starts
	int n;cin>>n;
	vector <int> v(n,0);
	int sum=0;

	for (int i=0;i<n;i++){
		cin>>v[i];
		sum+=v[i];
	}

	if (sum & 1){
		coout<<"NO";
		return 0;
	}

	map <int,int> a1,a2;

	a1[v[0]]=1;
	for (int i=1;i<n;i++){
		a2[v[i]]++;
	}
	int sdash=0;
	for (int i=0;i<n-1;i++){
		sdash+=v[i];
		if (sdash==sum/2){
			cout<<"YES";
			return 0;
		}
		if (sdash<sum){
			int x=sum/2-sdash;
			
			
		}


	}
	
	return 0;
}