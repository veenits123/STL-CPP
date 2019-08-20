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
	int t;cin>>t;while(t--){
		string s;cin>>s;
		map <char,int> m;
		m.insert({'C',1});
		m.insert({'E',2});
		m.insert({'S',3});
		int c=0,res=1;
		for (int i=1;i<s.size();i++){
			if (m[s[i]]-m[s[i-1]]<0){
				res=0;
			}

		}
		cout<<(res?"yes":"no")<<endl;
		
	}
	
	return 0;
}