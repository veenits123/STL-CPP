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
	int t;cin>>t;while (t--){
		int n,x;cin>>n;
		map<int,bool> m;
		for (int i=0;i<n;i++){
			cin>>x;
			m[x]=true;
		}
		int q,qr;cin>>q;
		for (int i=0;i<q;i++){
			cin>>qr;
			if (m.count(qr)>0){
				cout<<"Yes"<<endl;
			}
			else {
				cout<<"No"<<endl;
			}

			
		}

	}
	
	return 0;
}